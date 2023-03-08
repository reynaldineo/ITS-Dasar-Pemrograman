#include <stdio.h>
#include <stdlib.h>

struct data{
    char nama[101];
    char e;
    char n;
    int ltd;
    int lng;

};

int num;
void cek(int *num){
    if(*num==1){
        *num=0;
    }
    else{
        for(int i=2;i<=*num/2;i++){
            if(*num % i==0){
                *num=0;
            }
        }
    }
}
int main()
{

    int a,b;
    int c;
    char cari[1001];
    scanf("%d %d",&a,&b);
    struct data x[a];

    for(int i=0;i<a;i++){
        scanf("%s %d%c %d%c",x[i].nama,&x[i].ltd,&x[i].n,&x[i].lng,&x[i].e);
    }
    for(int i=0;i<b;i++){
        scanf("%s",cari);
        for(int j=0;j<a;j++){
            if(strcmp(cari,x[j].nama)==0){
            cek(&x[j].ltd);
            cek(&x[j].lng);
                if(x[j].ltd != 0 && x[j].lng != 0){
                    printf("%s aman! Bangunlah Kesatria!\n",x[j].nama);
                    c=1;
                    break;
                }
                else{
                    printf("%s tidak aman! Ini pasti ulah Gorgom!\n",x[j].nama);
                    c=1;
                    break;
                }
            }
            else{
                c=0;
            }
        }
        if(c==0){
            printf("Tempat apa itu? Kotaro tidak tahu!\n");
        }
    }
    return 0;
}
