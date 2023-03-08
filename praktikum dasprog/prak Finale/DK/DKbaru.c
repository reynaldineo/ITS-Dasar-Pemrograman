#include <stdio.h>
#include <string.h>

struct base
{
    char namaTempat[101];
    char cekTempat[102];
    int latittude;
    int longitude;
    // int cek, aman;
};


int cekPrima (int bilangan) {
    int status;
    for(int angka=2; angka<bilangan; angka++){
        if(bilangan %angka == 0){
            status = 0;
            break;
        } 
        else {
            status = 1;
        }
    }
    return status;
}


int main () {
    // a = jumlah tempat || b = jumlah tempat yg di cek
    int a, b, n, e;
    scanf("%d %d", &a, &b);

    struct base data[a];

    // nginput data
    for (int i = 0; i < a; i++) {
        scanf("%s %d%c %d%c", data[i].namaTempat, &data[i].latittude,&n, &data[i].longitude,&e);
    }

     
    for (int i=0; i<b, i++) {
        // nginput data tempat yg di cek
        char cekTempat [101];
        scanf("%s", cekTempat);

        for (int j=0; j<a; j++) {
            if(strcmp(cekTempat,data[j].namaTempat)==0){

            }
        }

    }
    
    
    return 0;
}