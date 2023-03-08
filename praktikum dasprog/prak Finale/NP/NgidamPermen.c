#include <stdio.h>
#include <math.h>

struct base
{
    int a, b, n, m, hasil;
};

int main () {

    int t;
    scanf("%d", &t);

    struct base data[t];  

    for (int i = 0; i < t; i++) {
        scanf("%d", &data[i].a);
        scanf("%d", &data[i].b);
        scanf("%d", &data[i].n);
        scanf("%d", &data[i].m);
        data[i].hasil = 0;
    }

    int hasilTemp=0; 
    int hasilTemp2;
    int hasilTemp3 =0;

    for (int i = 0; i < t; i++)
    {
         
        for (int j = 0; j < data[i].n; j++)
        {
            int awal = pow(data[i].a,j);
        printf("    hasil awal %d\n", awal);
            int akhir = pow(j,data[i].b);
        printf("    hasil akhir %d\n", akhir);
            hasilTemp = awal * akhir;
        printf("hasil kali %d\n", hasilTemp);
            hasilTemp2 = hasilTemp % data[i].m;
        printf("hasil mod %d\n", hasilTemp2);
            data[i].hasil = data[i].hasil + hasilTemp2;
        printf("hasil %d = %d\n",j, data[i].hasil);
        }
        printf("udah\n");
        
    }

    for (int i = 0; i < t; i++)
    {
        printf("data %d: %d\n",i, data[i].hasil);
    }
    
    
    
    return 0;
}