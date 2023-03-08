#include <stdio.h>

//buatlah program yang dapat menentukan seseorang dapat sIM.
//syarat mendapatkan SIM adalah usia >=18 tahun, lulus ujian tulis (>=60), dan ujian praktik (>=60)
//jika syarat di atas memenuhi, cetak : Selamat dapat SIM.
//jika usia tidak memenuhi, cetak: masih anak-anak
//jika tidak lulus ujian praktik, cetak: ujian praktik ulang
//jika tidak lulus ujian tulis, cetak: ujian tulis ulang

    int main () {

        // deklarasi variabel yang  akan di pakai
        int usia, ujianTulis, ujianPraktik;

        scanf("%d %d %d", &usia, &ujianTulis, &ujianPraktik);

        if(usia>=18)
        // kalau usia di atas 18 lanjut
        // kalau engga ya turun ke else paling bawah
            {
                if(ujianTulis>=60)
                    // kalau nilai tulis di atas 60 lanjut
                    // kalau engga lanjut ke else di bawah
                        {
                            if(ujianPraktik>=60)   
                            // kalau nilai pratik lulus lanjut
                            // kalau engga lanjut ke else 1 di bawah
                                printf("Selamat dapat SIM\n");

                                else //1
                                // kalau ga lolos praktik ya ngulang
                                    printf("ujian praktik ulang\n");
                        }
                    else
                {
                    // kalau ujian tulis lolos tapi ujian praktik ga lolos
                    // ya ngulang juga   
                    if(ujianPraktik>=60)
                    {
                    printf("ujian tulis ulang\n");
                    }

                else
                    // kalau ujian tulis ga lolos praktik juga ga lolos 
                    // ya ngulang
                    {
                     printf("ujian praktik ulang\n");
                     printf("ujian tulis ulang\n");
                    }
                }
            }
        else
        {
        printf("masih anak-anak\n");
        }
        






        return 0;
    }