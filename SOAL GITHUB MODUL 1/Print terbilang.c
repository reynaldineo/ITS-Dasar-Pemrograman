#include <stdio.h>

// Buatlah program yang hanya menerima inputan 0 sampai 999 
// dan mengeluarkan hasil berupa kalimat terbilang dari angka yang dimasukan.

    int main () {

        int x;

        printf("Masukkan angka yang anda inginkan \n");
        scanf("%d", &x);

        // mulai memisahkan setiap digit

        switch (x)
    {
        case 0 ... 10:

            if (x == 0) { printf("nol"); }
            if (x == 1) { printf("Satu"); }
            if (x == 2) { printf("Dua"); }
            if (x == 3) { printf("Tiga"); }
            if (x == 4) { printf("Empat"); }
            if (x == 5) { printf("Lima"); }
            if (x == 6) { printf("Enam"); }
            if (x == 7) { printf("Tujuh"); }
            if (x == 8) { printf("Delapan"); }
            if (x == 9) { printf("Sembilan"); }
            if (x == 10) { printf("Sepuluh"); }

            break;

        case 11 ... 19:

            if (x%10 == 1) { printf("Se"); }
            if (x%10 == 2) { printf(" Dua"); }
            if (x%10 == 3) { printf(" Tiga"); }
            if (x%10 == 4) { printf(" Empat"); }
            if (x%10 == 5) { printf(" Lima"); }
            if (x%10 == 6) { printf(" Enam"); }
            if (x%10 == 7) { printf(" Tujuh"); }
            if (x%10 == 8) { printf(" Delapan"); }
            if (x%10 == 9) { printf(" Sembilan"); }

            printf("belas");
    
            break;

        case 20 ... 99:

            if (x/10 == 2) {printf ("Dua puluh ");}
            if (x/10 == 3) {printf ("Tiga puluh ");}
            if (x/10 == 4) {printf ("Empat puluh ");}
            if (x/10 == 5) {printf ("Lima puluh ");}
            if (x/10 == 6) {printf ("Enam puluh ");}
            if (x/10 == 7) {printf ("Tujuh puluh ");}
            if (x/10 == 8) {printf ("Delapan puluh ");}
            if (x/10 == 9) {printf ("Sembilan puluh ");}
               
                    if (x%10 == 0) { printf(""); }
                    if (x%10 == 1) { printf("satu"); }
                    if (x%10 == 2) { printf("dua"); }
                    if (x%10 == 3) { printf("tiga"); }
                    if (x%10 == 4) { printf("empat"); }
                    if (x%10 == 5) { printf("lima"); }
                    if (x%10 == 6) { printf("enam"); }
                    if (x%10 == 7) { printf("tujuh"); }
                    if (x%10 == 8) { printf("delapan"); }
                    if (x%10 == 9) { printf("sembilan"); }
                
                 break;

        case 100 ... 999:
            // cek ratusan
            if ((x/100) == 1)  { printf("Seratus ");}
            if ((x/100) == 2)  { printf("Dua ratus ");}
            if ((x/100) == 3)  { printf("Tiga ratus ");}
            if ((x/100) == 4)  { printf("Empat ratus ");}
            if ((x/100) == 5)  { printf("Lima ratus ");}
            if ((x/100) == 6)  { printf("Enam ratus ");}
            if ((x/100) == 7)  { printf("Tujuh ratus ");}
            if ((x/100) == 8)  { printf("Delapan ratus ");}
            if ((x/100) == 9)  { printf("Sembilan ratus ");}
                        
                 // cek puluhan
                if ((x/10)%10 == 0) 
                if ((x/10)%10 == 1 && x%10 == 0) {printf ("sepuluh");}
                if ((x/10)%10 == 2) {printf ("dua puluh ");}
                if ((x/10)%10 == 3) {printf ("tiga puluh ");}
                if ((x/10)%10 == 4) {printf ("empat puluh ");}
                if ((x/10)%10 == 5) {printf ("lima puluh ");}
                if ((x/10)%10 == 6) {printf ("enam puluh ");}
                if ((x/10)%10 == 7) {printf ("tujuh puluh ");}
                if ((x/10)%10 == 8) {printf ("delapan puluh ");}
                if ((x/10)%10 == 9) {printf ("sembilan puluh ");} 

                    if ((x/10)%10 != 1)     
                    {  // cek satuan 
                    if (x%10 == 0) { printf(""); }
                    if (x%10 == 1) { printf("satu"); }
                    if (x%10 == 2) { printf("dua"); }
                    if (x%10 == 3) { printf("tiga"); }
                    if (x%10 == 4) { printf("empat"); }
                    if (x%10 == 5) { printf("lima"); }
                    if (x%10 == 6) { printf("enam"); }
                    if (x%10 == 7) { printf("tujuh"); }
                    if (x%10 == 8) { printf("delapan"); }
                    if (x%10 == 9) { printf("sembilan"); }  
                    }

                    if ((x/10)%10 == 1) // dari 111-119
                {
                    if (x%10 == 1) { printf("se"); }
                    if (x%10 == 2) { printf("dua"); }
                    if (x%10 == 3) { printf("tiga"); }
                    if (x%10 == 4) { printf("empat"); }
                    if (x%10 == 5) { printf("lima"); }
                    if (x%10 == 6) { printf("enam"); }
                    if (x%10 == 7) { printf("tujuh"); }
                    if (x%10 == 8) { printf("delapan"); }
                    if (x%10 == 9) { printf("sembilan"); }
                
                    printf("belas");
                }
            break;
                            
            default:
                printf("angka yang anda masukan terlalu besar");
            break;
        
        } //punya switch
        return 0;
    }// punya main