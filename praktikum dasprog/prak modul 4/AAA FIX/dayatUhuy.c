#include <stdio.h>
#include <string.h>
#include <math.h>

struct data
{
    int kodeAngka;
    char LR;
};

int main () {
    // input berapa data 
    int x;
    scanf("%d", &x);

    struct data isi[x];
    
    char fullKode[301];
    for (int i = 0; i < x; i++)
    {   // input full kode huruf dan angka DAN kode L atau R nya
        scanf("%s %c", fullKode, &isi[i].LR);
        isi[i].kodeAngka = 0;
        int panjangKode = strlen(fullKode);
        
        for (int j = 0; j < panjangKode; j++)
        {   // PISAH kalau di full kode ada angka 
            if (fullKode[j] >= '0' && fullKode[j] <= '9')
            {   // masukin ke KODEangka = di kali sepuluh biar maju + (di kurang 48 itu ASCII 0)
                isi[i].kodeAngka = (isi[i].kodeAngka*10) + (fullKode[j]-48);
            }
        }
    }

    // MULAI NGECEK YG SAMA L DAN R
    int jumlah = 0, cek = 0;
    for (int i = 0; i < x; i++) 
    {
        for (int j = 0; j < x; j++)
        {   // KALAU kodeangka sama DAN koden i L dan kode j R DAN 'r' artinya belum pernah di cek, karena nnti kalau udh di cek di ubah isinya
            if (isi[i].kodeAngka == isi[j].kodeAngka && isi[i].LR != isi[j].LR && isi[i].LR != 'r' && isi[j].LR != 'r')
            {
                isi[i].LR = 'r'; // ngubah isinya biar nnti ga di cek lagi
                isi[j].LR = 'r';
                jumlah = jumlah + isi[i].kodeAngka; // jumlah total angkanya = jumlah (0) +
                cek++; // udh berapa pasang yg di cek
            }
        }
    }
    
    // buat ngecek Bilangan Kuadrat apa bukan
    double akarKoma = sqrt(jumlah);
    int akar = sqrt(jumlah);

    // kalau ga ada pasangan
    if (cek == 0) printf("Tidaaakkkkkkkkk\n");
    
    // kalau merupakan bilangan  kuadrat
    else if (akarKoma == akar)
    {
        printf("%d\n", cek);
        printf("Piertotum Locomotor\n");
    }
    
    // kalau BUKAN merupakan bilangan  kuadrat
    else if (akarKoma != akar)
    {
        printf("%d\n", cek);
    }

    return 0;
}