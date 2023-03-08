#include <stdio.h>
#include <string.h>

int main() {
    int n; 
    scanf("%d", &n);

    char namaPlayer[n][50];
    int indeks = 0;
    int hasil;

    for(int i=0; i<n; i++) 
    {   
        scanf("%s", namaPlayer[i]);

        int batasAngka;
        scanf("%d", &batasAngka);
        
        int angka[batasAngka];
        int x = -1000;
        int batasan = 0;

        for(int j=0; j<batasAngka; j++)
        {
            scanf("%d", &angka[j]);
            batasan += angka[j];

            if(x < batasan) x = batasan;
            if(batasan < 0) batasan = 0;
        }   

        if(hasil < x) {
            hasil = x;
            indeks = i;
        }
    }
    printf("%s", namaPlayer[indeks]);
    return 0;
}