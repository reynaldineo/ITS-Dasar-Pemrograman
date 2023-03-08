#include <stdio.h>

    int main () {

        int p, q, r, s;
        scanf ("%d %d %d %d", &p, &q, &r, &s);

        int angka;
        angka = p*2*2*2 + q*2*2 + r*2 + s;

        if (angka == 0) { printf ("1 1 1 1 1 1 0");}
        else if (angka == 1) { printf ("0 1 1 0 0 0 0");}
        else if (angka == 2) { printf ("1 1 0 1 1 0 1");}
        else if (angka == 3) { printf ("1 1 1 1 1 1 1");}
        else if (angka == 4) { printf ("0 1 1 0 0 1 1");}     
        else if (angka == 5) { printf ("1 0 1 1 0 1 1");}
        else if (angka == 6) { printf ("1 0 1 1 1 1 1");}
        else if (angka == 7) { printf ("1 1 1 0 0 0 0");}
        else if (angka == 8) { printf ("1 1 1 1 1 1 1");}
        else if (angka == 9) { printf ("1 1 1 1 0 1 1");}

        return 0;
    }