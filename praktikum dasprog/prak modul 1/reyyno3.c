#include <stdio.h>

    int main () {

        int x; // jumlah lempengan

        scanf ("%d", &x); //masukin jumlah lempengan

        // kelipatan 3 pertama nori
        // kelipatan 3 kedua rino

        // untuk cek kelipatan 3 awal
        if (x%3 == 0)
        {
            if ((x-1)%2 == 0)
            {
                printf ("rino");
            }
            else printf ("nori");
        }

        if ((x-1)%2 == 0)
            {
                if (x%2 == 0)
                {
                    printf("nori");
                }
            }

        else
        {
            printf("Rkoko");
        }
        
        





        return 0;
    }