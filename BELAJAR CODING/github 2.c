#include <stdio.h>

// Buatlah program yang hanya menerima inputan 0 sampai 999 
// dan mengeluarkan hasil berupa kalimat terbilang dari angka yang dimasukan.

    int main (){

        int x;

        printf("Masukkan angka yang anda inginkan \n");
        scanf("%d", &x);

        // mulai memisahkan setiap digit

        switch (x)
        {

        case 0 ... 10:

            if (x == 0) { printf("nol"); }
            if (x == 1) { printf("satu"); }
            if (x == 2) { printf("dua"); }
            if (x == 3) { printf("tiga"); }
            if (x == 4) { printf("empat"); }
            if (x == 5) { printf("lima"); }
            if (x == 6) { printf("enam"); }
            if (x == 7) { printf("tujuh"); }
            if (x == 8) { printf("delapan"); }
            if (x == 9) { printf("sembilan"); }
            if (x == 10) { printf("sepuluh"); }

            break;

        case 11 ... 19:

            if (x%10 == 1) { printf("se"); }
            if (x%10 == 2) { printf(" dua"); }
            if (x%10 == 3) { printf(" tiga"); }
            if (x%10 == 4) { printf(" empat"); }
            if (x%10 == 5) { printf(" lima"); }
            if (x%10 == 6) { printf(" enam"); }
            if (x%10 == 7) { printf(" tujuh"); }
            if (x%10 == 8) { printf(" delapan"); }
            if (x%10 == 9) { printf(" sembilan"); }

            printf("belas");
    
            break;

        case 20 ... 99:

            if (x/10 == 2)
            {   printf ("dua puluh ");

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
            
            if (x/10 == 3)
            {   printf ("tiga puluh ");

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
            
            if (x/10 == 4)
            {   printf ("empat puluh ");

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

            if (x/10 == 5)
            {   printf ("lima puluh ");

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

            if (x/10 == 6)
            {   printf ("enam puluh ");

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

            if (x/10 == 7)
            {   printf ("tujuh puluh ");

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

            if (x/10 == 8)
            {   printf ("delapan puluh ");

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

            if (x/10 == 9)
            {   printf ("sembilan puluh ");

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
            
            break;

        case 100 ... 999:
            // untuk 100-199 if dlm if x/100 x/100 2
            if ((x/100) == 1)  { printf("seratus ");}
            if ((x/100) == 2)  { printf("dua ratus ");}
            if ((x/100) == 3)  { printf("tiga ratus ");}
            if ((x/100) == 4)  { printf("empat ratus ");}
            if ((x/100) == 5)  { printf("lima ratus ");}
            if ((x/100) == 6)  { printf("enam ratus ");}
            if ((x/100) == 7)  { printf("tujuh ratus ");}
            if ((x/100) == 8)  { printf("delapan ratus ");}
            if ((x/100) == 9)  { printf("sembilan ratus ");}

            {
                if ((x/10)%10 == 0) // dari 101-109
                {   
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

                if ((x/10)%10 == 1 && x%10 == 0) // 110 aja
                {   
                    printf("sepuluh"); 
                }

                else if ((x/10)%10 == 1) // dari 111-119
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
            
                if ((x/10)%10 == 2)
                {   printf ("dua puluh ");

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
            
                if ((x/10)%10 == 3)
                {   printf ("tiga puluh ");

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
            
            if ((x/10)%10 == 4)
            {   printf ("empat puluh ");

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

            if ((x/10)%10 == 5)
            {   printf ("lima puluh ");

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

            if ((x/10)%10 == 6)
            {   printf ("enam puluh ");

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

            if ((x/10)%10 == 7)
            {   printf ("tujuh puluh ");

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

            if ((x/10)%10 == 8)
            {   printf ("delapan puluh ");

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

            if ((x/10)%10 == 9)
            {   printf ("sembilan puluh ");

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

             }
             break;
        
        default:
             printf("angka yang anda masukan terlalu besar");
            break;
        }

        return 0;
    }