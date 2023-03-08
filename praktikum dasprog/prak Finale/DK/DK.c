#include <stdio.h>
#include <string.h>

struct base
{
    char namaTempat[101];
    char n, e;
    int latittude, longitude;
};

int num;
void cekPrima(int *num) {
    if(*num==1) *num=0;
    else {
        for(int i=2;i<=*num/2;i++) {
            if(*num % i==0) *num=0;
        }
    }
}

int main() {
    int a, b;
    scanf("%d %d",&a, &b);

    struct base data[a];

    for(int i=0;i<a;i++) {
        scanf("%s %d%c %d%c",data[i].namaTempat,&data[i].latittude,&data[i].n,&data[i].longitude,&data[i].e);
    }

    int cek;
    char cekTempat[101];
    for(int i=0;i<b;i++) {
        scanf("%s",cekTempat);
        for(int j=0;j<a;j++) {
            cek =0;
            if(strcmp(cekTempat,data[j].namaTempat)==0) {
                cekPrima(&data[j].latittude);
                cekPrima(&data[j].longitude);
                cek++;
                if(data[j].latittude != 0 && data[j].longitude != 0) {
                    printf("%s aman! Bangunlah Kesatria!\n",data[j].namaTempat);
                    break;
                }
                else {
                    printf("%s tidak aman! Ini pasti ulah Gorgom!\n",data[j].namaTempat);
                    break;
                }
            }
        }
        if(cek==0) printf("Tempat apa itu? Kotaro tidak tahu!\n");
    }
    return 0;
}
