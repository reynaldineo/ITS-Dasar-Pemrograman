#include <stdio.h>

    int main() {

        int tahun, hari;
        scanf("%d", &tahun);

        if (tahun >= 2021)
        {
            hari = (tahun-2021) + ((tahun-2021)/4) - ((tahun-2001)/100) + ((tahun-2001)/400);
            hari %= 7;

            if (hari == 0) printf("kamis");
            else if (hari == 1) printf("jumat");
            else if (hari == 2) printf("sabtu");
            else if (hari == 3) printf("mingggu");
            else if (hari == 4) printf("senin");
            else if (hari == 5) printf("selasa");
            else if (hari == 6) printf("rabu");
        }
        
        else if (tahun < 2020) 
        {
            hari = (2020-tahun) + ((2020-tahun)/4) - ((2000-tahun)/100) + ((2000-tahun)/400);
            hari %= 7;

            if (hari == 0) printf("selasa");
            else if (hari == 1) printf("senin");
            else if (hari == 2) printf("minggu");
            else if (hari == 3) printf("sabtu");
            else if (hari == 4) printf("jumat");
            else if (hari == 5) printf("kamis");
            else if (hari == 6) printf("rabu");
        }

        return 0;
    }