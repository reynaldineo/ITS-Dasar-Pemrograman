#include <stdio.h>
#include <string.h>
int main()
{
    // inputan kata kata total
	char pesan[1000]; 
    // input kata yg mau di hilangin
    char hilang[20];
	scanf("%s%s", &pesan, &hilang);
    // copy panjang kata 
	int pesan2 = strlen(pesan), hilang2 = strlen(hilang);
    // string ke brp yg ga di hapus
	int y = 0;
    // mulai ngecek kata 1 per 1, dari awal
    int x = 0;

    // mulai ngecek kata 1 per 1, CUMAN UNTUK KATA YG MAU DI HILANGIN
	int z;
    
    int key, tmbhKey;
	scanf("%d%d", &key, &tmbhKey);

	// karen di enskripsi 1 per 1, maka ini di print di awal
    printf("prakDasprog{");

    // mulai nge enskripsi 1 per 1
	while(x<pesan2)
	{
        // sama kayak huruf yg di hilangin apa engga
		int a = 0;

        // ngecek dari kata awal (0) sampai akhir panjang kata hilang
		for(z=0; z<hilang2; z++)
		{
            // ngecek ada yg sama apa ga
            // x+z, karena x itu kata yg dicek, z itu penambahan yg di cek
			if(pesan[x+z]!=hilang[z])
			{
                // tambah nilai
				a++;
				break; // biar hemat memory, kalau udh ga sama langsung lanjut next step
		    }
        }
        // udh ngelewatin proses buang huruf

        // kalau masih 0 kan berarti kata yg mau di hilangi
		if(a==0)
        // x nya langsung di skip ke urutan setelah 3 kata oke (kata yg mau di hilangi)
			x = x + hilang2;

        // kalau ga 0, berarti bukan kata yg mau di hilanggi
        // maka langsung di enskripsi boyy
		else
		{
            // kata yg sedang di enskripsi
			char chr;
            // kalau ganjil di enskripsi
			if(y%2==1 && (pesan[x]>='A' && pesan[x]<='Z' || pesan[x]>='a' && pesan[x]<='z'))
			{
            // kurangin brp kata = key + (kata yg di cek skrg * increment)
            // modulo 26 biar masih di range alpabet
				int krg = (key + y * tmbhKey) % 26;
            // enksripsi = kata ke brp - kurang brp kata
				chr = pesan[x] - krg;

            // kalau decodenya kapital dan hasil decodenya huruf kecil
            // maka di tambah 58 biar jadi huruf kecil
				if(pesan[x]>='A' && pesan[x]<='Z' && chr<'A')
                    // + 58 itu jumlah A besar ke z kecil. 26 + 26 + 6
					chr = chr + 58;
            // kalau decodenya huruf kecil dan hasil decodenya kapital
            // maka di kurang 6 biar jadi kapital
				else if(pesan[x]>='a' && pesan[x]<='z' && chr<'a')
                    // kurang 6, itu jumlah a kecil ke Z besar
					chr = chr - 6; 
			}

            // kalau genap kan ga di enskripsi, ya tetap
			else
				chr = pesan[x];

            // print 1 per 1 kata yg udh di enskripsi
			printf("%c", chr);
			
            // nambah untuk cek ganjil genapnya
            y++;
            // nambah kata yg mau di cek, ada di while
            x++;
		}
        //selesai
	}
	printf("}");
}
// tokehokesokeyokeoke
// oke
// 2
// 1
