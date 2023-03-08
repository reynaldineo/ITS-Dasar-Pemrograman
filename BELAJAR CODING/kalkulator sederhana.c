#include <stdio.h>

int main () {

    int angka1, angka2, rumus, hasil;

    printf("Kalkulator Sederhana by Rey\n -----------------\n");
        printf(" Pilih Perintah \n");
            printf("Tekan 1 untuk penjumlahan\n");
            printf("Tekan 2 untuk penggurangan\n");
            printf("Tekan 3 untuk perkalian\n");
            printf("Tekan 4 untuk pembagian\n");
            printf("Tekan 5 untuk sisa bagi\n");
        printf("\n anda memilih perintah : ");

        scanf("%d", &rumus);

            printf("\nmasukan angka pertama = ");
            scanf("%d", &angka1);

                printf("\nmasukan angka kedua = ");
                scanf("%d", &angka2);

        if (rumus == 1) 
        {
            hasil = angka1 + angka2;
        }
        else if (rumus == 2)
        {
            hasil = angka1 - angka2;
        }
        else if (rumus == 3)
        {
            hasil = angka1 * angka2;
        }
        else if (rumus == 4)
        {
            hasil = angka1 / angka2;
        }
        else if (rumus == 5)
        {
            hasil = angka1 % angka2;
        }
        else { printf("\nperintah tidak di mengerti");}

        printf("\n Hasilnya adalah %d", hasil);
        // printf("%d", hasil);

return 0;
}