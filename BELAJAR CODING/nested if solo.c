#include <stdio.h>


//buatlah program yang dapat menentukan seseorang dapat sIM.
//syarat mendapatkan SIM adalah usia >=18 tahun, lulus ujian tulis (>=60), dan ujian praktik (>=60)
//jika syarat di atas memenuhi, cetak : Selamat dapat SIM.
//jika usia tidak memenuhi, cetak: masih anak-anak
//jika tidak lulus ujian praktik, cetak: ujian praktik ulang
//jika tidak lulus ujian tulis, cetak: ujian tulis ulang

    int main (){

        int umur, ujianTulis, ujianPraktik;

        scanf("%d %d %d", &umur, &ujianTulis, &ujianPraktik);

        if (umur >= 18)
        {
            if (ujianTulis >= 60)
            {
                if (ujianPraktik >= 60)
                // lulus semua
                {
                    printf("Selamat anda mendapatkan SIM");
                }
                    // tulis lulus tapi praktik tidak
                    else printf("ujian praktik ulang");
                
            }
            // ga lulus tulis cek lulus praktik ga?
            else
            {
                if (ujianPraktik >= 60)
                {
                    printf("ujian tulis ulang ");
                }
                // ga lulus tulis dan ga lulus praktik
                else
                {
                    printf ("ujian tulis ulang\n");
                    printf("ujian praktik ulang");
                }
            }      
        }
        else
        //semua ga lolos
        {
            printf("masih di bawah umur");
        }
        



        return 0;
    }