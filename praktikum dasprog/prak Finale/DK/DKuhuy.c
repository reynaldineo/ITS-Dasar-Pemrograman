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
    int a, b,n,e;
    scanf("%d %d", &a, &b);

    struct base data[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%s %d%c %d%c", data[i].namaTempat, &data[i].latittude,&n, &data[i].longitude,&e);
    }

    for (int i = 0; i < b; i++) {
        // char cekTempat[101];
        // scanf("%s", cekTempat);
        scanf("%s", data[i].cekTempat);

        for (int j = 0; j < a; i++) {
            if (strcmp(data[i].cekTempat, data[j].namaTempat) == 0 )
            {
                // fungsi cek prima
                int prima1 = cekPrima(data[j].latittude);
                int prima2 = cekPrima(data[j].longitude);
                if (prima1 != 0 && prima2 != 0) {
                    printf("%s aman! Bangunlah Kesatria!\n", data[i].namaTempat);
                    break;
                }
                else if (prima1 == 0 || prima2 == 0) {
                    printf("%s tidak aman! Ini pasti ulah Gorgom!\n", data[i].namaTempat);
                    break;
                }
            }

            else if (strcmp(data[i].cekTempat, data[j].namaTempat) != 0)
            {
                printf("Tempat apa itu? Kotaro tidak tahu!\n");
                break;
            }
            
        }
        
    }
    
    return 0;
}