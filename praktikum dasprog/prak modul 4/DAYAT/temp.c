#include <stdio.h>
#include <string.h>
#include <math.h>

struct data
{
    int kodeAngka;
    char LR;
};

int main () {
    int x;
    scanf("%d", &x);

    struct data isi[x];

    char fullKode[301];
    for (int i = 0; i < x; i++)
    {
        scanf("%s %c", fullKode, &isi[i].LR);
        isi[i].kodeAngka = 0;
        int panjangKode = strlen(fullKode);
        
        for (int j = 0; j < panjangKode; j++)
        {
            if (fullKode[j] >= '0' && fullKode[j] <= '9')
            {
                isi[i].kodeAngka = (isi[i].kodeAngka*10) + (fullKode[j]-48);
            }
        }
    }
    
    int jumlah = 0, cek = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {   
            if (isi[i].kodeAngka == isi[j].kodeAngka && isi[i].LR != isi[j].LR && isi[i].LR != 'r' && isi[j].LR != 'r')
            {
                isi[i].LR = 'r';
                isi[j].LR = 'r';
                jumlah = jumlah + isi[i].kodeAngka;
                cek++;
            }
        }
    }
    
    double akarKoma = sqrt(jumlah);
    int akar = sqrt(jumlah);

    if (cek == 0) printf("Tidaaakkkkkkkkk\n");
    
    else if (akarKoma == akar)
    {
        printf("%d\n", cek);
        printf("Piertotum Locomotor\n");
    }
    
    else if (akarKoma != akar)
    {
        printf("%d\n", cek);
    }

    return 0;
}