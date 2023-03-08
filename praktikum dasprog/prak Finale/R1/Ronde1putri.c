#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int N; 
    scanf("%d", &N);

    char nama[N][50]; 
    int indeks = 0;
    int hasil;

    for(int i=0; i<N; i++) 
    {   
        scanf("%s", nama[i]);

        int angka; scanf("%d", &angka);
        // long long int penambahan[angka];
        int barisan[angka];
        int a = -1000;
        int batasan = 0;
        // int tanda = 0;

        for(int j=0; j<angka; j++)
        {
            scanf("%d", &barisan[j]);
            batasan += barisan[j];

            if(a < batasan){
                a = batasan;
            }if(batasan < 0){
                batasan = 0;
            }

        }   if(i == 0) hasil = a;
            if(hasil < a){
            hasil = a;
            indeks = i;
        }
    }
    printf("%s\n", nama[indeks]);
}