#include <stdio.h>
#include <string.h>

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
        scanf("nama %s", mhs[i].nama);
        scanf("mtk %d", &mhs[i].mtk);
        scanf("ipa %d", &mhs[i].ipa);
        scanf("bindo %d", &mhs[i].bindo);
        scanf("bing %d", &mhs[i].bing);
    }

    // input jumlah yg mau di print
    int y;
    scanf("mau ngeprint brp data %d", &y);

    char cekNama [100];
    for (int i = 0; i < y; i++)
    {
        scanf("%s", cekNama[i]);
    }
    

    for (int i = 0; i < x; i++)
    {
        if (strcmp(mhs[i].nama,cekNama[i]) == 0)
        {
            printf("nama %s\n", mhs[i].nama);
            printf("mtk %d\n", mhs[i].mtk);
            printf("ipa %d\n", mhs[i].ipa);
            printf("bindo %d\n", mhs[i].bindo);
            printf("bing %d\n", mhs[i].bing);
            
        }
    }
    
    

    return 0;
}