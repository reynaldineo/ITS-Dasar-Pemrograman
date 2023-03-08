#include <stdio.h>
#include <string.h>

struct base
{
    char namaTempat[101];
    char cekTempat[102];
    int latittude, longitude ;
    int ceklatittude, ceklongitude;
    // int cek, aman;
};


int main () {
    int a, b,n,e;
    scanf("%d %d", &a, &b);

    struct base data[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%s %d%c %d%c", data[i].namaTempat, &data[i].latittude,&n, &data[i].longitude,&e);
    }

    for (int i = 0; i < b; i++)
    {
        scanf("%s", data[i].cekTempat);
    }
    

    int cek = 0;
        // cek prima
        for(int j = 0 ;j < a; j++)
        {
            for(int k = 1; k <= data[j].latittude; k++)
            {
                if(data[j].latittude%k == 0)
                    data[j].ceklatittude++;
                //printf("k = %d, sumlt = %lli\n", k, a[j].sumlt);
            }
            for(int k = 1; k <= data[j].longitude ; k++)
            {
                if(data[j].longitude%k == 0)
                    data[j].ceklongitude++;
                //printf("k = %d, sumat = %lli\n", k, a[j].sumat);
            }
        }
    

    for (int i = 0; i < b; i++)
    {
    
        for (int j = 0; j < a; j++) {
            if (strcmp(data[i].cekTempat, data[j].namaTempat) == 0 )
            {
                cek++;
                if(data[j].ceklatittude == 2 && data[j].ceklongitude == 2) {
                    printf("%s aman! Bangunlah Kesatria!\n", data[j].namaTempat);
                }
                else printf("%s tidak aman! Ini pasti ulah Gorgom!\n", data[j].namaTempat);
                

            }
            //else if (strcmp(cekTempat, data[q].namaTempat) != 0 ){
                // printf("Tempat apa itu? Kotaro tidak tahu!\n");
                // break;
            //}

        }
        
         if (cek == 0) printf("Tempat apa itu? Kotaro tidak tahu!\n");
    
    }
    return 0;
}