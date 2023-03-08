#include <stdio.h>
#include <string.h>

struct base
{
    char namaTempat[101];
    char cekTempat[102];
    int latittude, longitude ;
    int ceklatittude, ceklongitude;
};

int main()
{
    int a, b;
    char n, e;
    scanf("%d %d", &a, &b);

    struct base data[a+2];

    for (int i = 0; i < a; i++){
        scanf("%s %d%c %d%c", data[i].namaTempat, &data[i].latittude,&n, &data[i].longitude,&e);
    }

    char cekTempat[1001][1001];
    for(int i = 0; i < b; i++) {
        scanf("%s", cekTempat[i]);
    }
    
    for(int j = 0 ;j < a; j++) {
        for(int k = 1; k <= data[j].latittude; k++) {
            if(data[j].latittude%k == 0)
            data[j].ceklatittude++;
        }
        for(int k = 1; k <= data[j].longitude ; k++) {
            if(data[j].longitude%k == 0)
            data[j].ceklongitude++;
        }
    }

    
    for(int i = 0; i < b; i++) {
        int cek = 0;
        for(int j = 0; j < a; j++) {
            if(strcmp(cekTempat[i], data[j].namaTempat)==0) {
                cek++;
                if(data[j].ceklatittude == 2 && data[j].ceklongitude == 2) {
                    printf("%s aman! Bangunlah Kesatria!\n", data[j].namaTempat);
                }
                else printf("%s tidak aman! Ini pasti ulah Gorgom!\n", data[j].namaTempat);
            }

        }
        if(cek == 0) printf("Tempat apa itu? Kotaro tidak tahu!\n");
    }
    return 0;
}
