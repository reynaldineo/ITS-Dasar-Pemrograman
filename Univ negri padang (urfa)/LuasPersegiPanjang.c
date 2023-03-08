#include <stdio.h> // ini itu librarynya

    int main () 
    {
        int panjang, lebar, luas; // nyatain variabel 
        printf("Masukkan panjang "); // biar programnya ngeprint kata2 itu
        scanf ("%d", &panjang); // angka yg di masukan kesimpan di variabel panajang
        
        printf("Masukkan lebar "); // biar programnya ngeprint kata2 itu
        scanf ("%d", &lebar); // angka yg di masukan kesimpan di variabel lebar
        
        luas = panjang * lebar; // variabel luas itu isinya angka dari hasil perkalian panjang dengan lebar

        printf("Luas persegi panjang adalah %d\n", luas); // ngeprint hasil angka dari variabel luas tadi

        return 0; // biar programnya berhenti
    }