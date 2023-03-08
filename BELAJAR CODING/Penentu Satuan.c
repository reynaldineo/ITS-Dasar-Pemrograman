#include <stdio.h>

int main()
{
    int angka, ratusan, puluhan, satuan;

        printf("nilai ratusan puluhan dan satuan\n");
        printf("________________________________\n\n");
        printf("masukan bilangan = ");
        scanf("%d", &angka);

            ratusan = angka/100;
            puluhan = (angka-ratusan*100)/10;
            satuan = (angka-ratusan*100-puluhan*10);

        if (angka<0)
        {
            printf("\nnilai yang dimasukan adalah negatif\n");
            return 0;
        }
        if(angka<=999)
        {
            printf("\nnilai %i adalah ratusan \n",ratusan);
            printf("nilai %i adalah puluhan \n",puluhan);
            printf("nilai %i adalah satuan \n",satuan);
        }
            else if (angka>=0)
         {
            printf("nilai yang dimasukan terlalu besar \n");
         }

    return 0;
}