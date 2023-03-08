#include <stdio.h>

    int main () {

        int angka1, angka2, hasil, husil;

        scanf("%d", &angka1);
        scanf("%d", &angka2);

    hasil = angka1 / angka2;
    husil = angka1 % angka2;

        printf("masing-masing %d\n", hasil);
        printf("bersisa %d", husil );


        return 0;
    }