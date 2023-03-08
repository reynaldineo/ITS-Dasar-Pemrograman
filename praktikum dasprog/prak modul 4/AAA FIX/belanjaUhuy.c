#include <stdio.h>
#include <string.h>

struct data
{
    char merk [20];
    int ukuran;
    int keindahan;
    int kualitas;
};


int main () {

    int x;
    scanf("%d", &x);
    
    struct data neo[x], temp;

    // nginput data
    for (int i = 0; i < x; i++)
    {
        scanf("%s", neo[i].merk);
        scanf("%d", &neo[i].ukuran);
        scanf("%d", &neo[i].keindahan);
        scanf("%d", &neo[i].kualitas);
    }

    // Mulai ngurutin
    int cek;
    for(int i=0; i<x; i++)
	{
		for(int j=0; j<x; j++)
		{
			cek = 0; // reset checkpoint, kalau lebih besar nnti di majuin

            // kalau kualiatas lebih besar, cekpoint di tambah biar nnti di tukar ke urutan depan
			if(neo[i].kualitas > neo[j].kualitas) cek = 1;
            
            // kalau cek = 0 (belum melewati pemeriksaan) DAN kualitasnya sama (karena ga mungkin lebih dari, karena udh di cek diatas)
			else if(cek == 0 && neo[i].kualitas == neo[j].kualitas) {
                // lanjut ke urutan yg harus di urut selanjutnya yaitu keindahan
				if(cek == 0 && neo[i].keindahan > neo[j].keindahan) cek = 1;

                // nested dari kualitas udh sama, dan masuk if keindahan sama apa ga 
				else if(cek == 0 && neo[i].keindahan == neo[j].keindahan) {
                    // lanjut ke urutan yg harus di urut selanjutnya yaitu ukuran
					if(cek == 0 && neo[i].ukuran > neo[j].ukuran) cek = 1;

                    // nested  dari KUALITAS, KEINDAHAN dan masuk ke if UKURAN
					else if(cek == 0 && neo[i].ukuran == neo[j].ukuran) {
                        // sesuai soal kalau semuanya sama di urutkan berdasarkan merek (abjad besar ke rendah)
						if(cek == 0 && strcmp(neo[i].merk, neo[j].merk) > 0) cek = 1;
					}
				}
			}

            // kalau lebih besar di pindah ke depan
			if(cek==1)
			{
				temp = neo[i];      // nilai i di masukin ke temp
				neo[i] = neo[j];    // nilai j di masukin ke i
				neo[j] = temp;      // nilai temp yg isinya awalnya i di masukin ke j
			}
		}
	}
	
    // ngeprint sesuai outputnya yg udh di urutin
    for(int i = 0; i < x; i++)
    {
		printf("%s %d %d %d\n", neo[i].merk, neo[i].ukuran, neo[i].keindahan, neo[i].kualitas);
    }
    
    return 0;
}