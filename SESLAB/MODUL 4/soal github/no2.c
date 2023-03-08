#include <stdio.h>

struct data {
    char nama [100];
    int mtk;
    int ipa;
    int bindo;
    int bing;
};


int main () {

    // input berapa data
    int x;
    scanf("%d", &x);

    struct data mhs[x];

    for (int i = 1; i <= x; i++)
    {
        scanf("%s", &mhs[i].nama);
        scanf("%d", &mhs[i].mtk);
        scanf("%d", &mhs[i].ipa);
        scanf("%d", &mhs[i].bindo);
        scanf("%d", &mhs[i].bing);
    }
    
    for (int i = 1; i <= x; i++)
    {
        printf("%s\n", mhs[i].nama);
        printf("%d\n", mhs[i].mtk);
        printf("%d\n", mhs[i].ipa);
        printf("%d\n", mhs[i].bindo);
        printf("%d\n", mhs[i].bing);
    }
    

    return 0;
}