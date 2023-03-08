#include <stdio.h>

int main() {

    int angka;

    printf("Masukan angka yang anda ingin kelompokan ");
    scanf("%d", &angka);

    if (0 <= angka <= 9)
    {
        printf("\nAngka tersebut merupakan satuan");
    }
    else if (10 <= angka <= 15)
    {
        printf("\nAngka tersebut merupakan b");
    }
    else if (angka <= 999)
    {
        printf("\nAngka tersebut merupakan ratusan");
    }
       


    return 0;
}