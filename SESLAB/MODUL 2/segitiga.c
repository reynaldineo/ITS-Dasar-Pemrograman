#include <stdio.h>

int main(){
    int a,b,n;
    printf("Program Membuat Gambar Bangun Datar Segitiga\n");
    printf("n-Masukkan nilai untuk tinggi segitiga :");
    scanf("%d", &n);

    for(a=0;a<=n;a++) 
    {
        for(b=0;b<=n;b++){
        printf("  ");
        }

        for(b=a;b<=n;b++){
        printf("  ");
        }

        for(b=1;b<=a;b++){
        printf("*");
        }

        for(b=1;b<a;b++){
        printf("*");
        }

        printf("n");
    }
} 