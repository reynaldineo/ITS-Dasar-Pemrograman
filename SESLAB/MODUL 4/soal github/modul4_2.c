#include<stdio.h>
#include<string.h>

struct un{
    char nama[20];
    int mat;
    int ipa;
    int bi;
    int bing;
};


int main(){
    int x;
    scanf("%d", &x);

    struct un ssw[x];

    for (int i = 0; i < x; i++){
        scanf("%s", ssw[i].nama);
        scanf("%d", &ssw[i].mat);
        scanf("%d", &ssw[i].ipa);
        scanf("%d", &ssw[i].bi);
        scanf("%d", &ssw[i].bing);
    }
    int y;
    scanf("%d", &y);
    char siapa[20];
    int bener;

    for(int i = 0; i < y; i++){
        bener = 0;
        scanf("%s", siapa);
        for(int j = 0; j < x; j++){
            if (strcmp(siapa,ssw[j].nama) == 0){
                printf("Nilai %s\n", ssw[j].nama);
                printf("Matematika : %d\n", ssw[j].mat);
                printf("IPA : %d\n", ssw[j].ipa);
                printf("Bahasa Indonesia : %d\n", ssw[j].bi);
                printf("Bahasa Inggris : %d\n", ssw[j].bing);
                bener +=1;
                break;
            }
        }
        if (bener == 0){
            printf("Nilai %s tidak ditemukan\n", siapa);
        }
    }
}