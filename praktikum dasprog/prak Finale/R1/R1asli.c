#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n; 
    scanf("%d", &n);

    char namaPlayer[n][50]; // bisa struct
    int indeks = 0;
    int hasil;

    for(int i=0; i<n; i++) 
    {   
        scanf("%s", namaPlayer[i]);

        int batasAngka; // jumlah batasAngka di angka
        scanf("%d", &batasAngka);
        
        int angka[batasAngka]; /// array angkanya brp batasAngka
        int x = -1000;
        int batasan = 0;

        for(int j=0; j<batasAngka; j++) // ngcek
        {
            scanf("%d", &angka[j]);
            batasan += angka[j];

            if(x < batasan) x = batasan;
            else if(batasan < 0) batasan = 0;
        }   

        if(i == 0) hasil = x;

        if(hasil < x) {
            hasil = x;
            indeks = i;
        }
    }
    printf("%s\n", namaPlayer[indeks]);
    return 0;
}