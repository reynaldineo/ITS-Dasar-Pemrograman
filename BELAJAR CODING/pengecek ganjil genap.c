#include <stdio.h>

int main () {

    int angka, hasil;
    
    printf("Masukan angka yang ingin anda cek : ");
    scanf("%d", &angka);

    hasil = angka % 2;

    if ( hasil == 0 )
    {
        printf("\n %d merupakan bilangan genap\n", angka);
    }
    else printf("\n %d merupakan bilangan ganjil\n");    
    
    return 0;
}
    