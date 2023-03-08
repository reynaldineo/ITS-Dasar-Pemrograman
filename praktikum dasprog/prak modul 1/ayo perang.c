#include <stdio.h>

    int main (){

        // masukin jumlah lempengan
        long long int x;
        scanf ("%lld", &x);


        long long int kelipatan, sisa;
        kelipatan = x/3; // buat nentuin kelipatan 3 yang ke berapa
        sisa = x%3; // buat ngecek ada koma apa engga

        if (sisa != 0) {kelipatan += 1;}
        // untuk di perbatasan
        // jika ada koma maka kelipatannya di naikin 1

        if ( kelipatan%2 == 0) // cek kelipatan ganjil apa genap. kalau ganjil = nori. kalau genap = rino
         {printf ("Rino");}
        else {printf ("Nori");}
        
        
        

        return 0;
    }