#include <stdio.h>
#include <math.h>

    int main() {

        int x; //masukin jumlah tombol
        scanf("%d", &x);

        float akarKoma; // float agar bisa koma
        akarKoma = sqrt(x); // akarin jumlah tombol
        // kalau akar koma dia bukan bilangan sempurna
        // kalau akar ga koma dia bil sem

        // buat hasil akarnya jadi ga ada koma
        int akar;
        akar = akarKoma; // paksa akarkoma jadi bil bulat

        /*
        UNTUK MENENTUKAN PINTU TERBUKA APA TIDAK 
        CEK APAKAH DIA BIL KUADARAT SEMPURNA APA TIDAK
        JIKA DIA BIL KUADRAT SEMPURNA, MAKA PINTU TERBUKA
        JIKA DIA BUKAN BIL KUADRAT SEMPURNA, MAKA PINTU TERTUTUP
        CEK BIL KUADRA SEMPURNA DENGAN APAKAH AKARKOMA = KOMA
        JUMLAH FAKTOR BIL KUADARAT SEMPURNA UDAH PASTI GANJIL
        */

        if (akarKoma == akar) // kalau faktornya pintu terbuka
        {
            printf("buka\\/");
            long long y = x*x; // variabel untuk jawaban soalnya
            y = y*(x+1)*(x+1)/4;

            printf("\n%lld", y);
        }
        
        else
        {
            printf("tutup/\\");
        }
        
        return 0;
    }