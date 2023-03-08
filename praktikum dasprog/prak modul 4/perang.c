#include <stdio.h>
#include <string.h>

struct isi
{
    char nama [21];
    char peran[21];
    int stamina;
};


int main () {

    int x;
    scanf("%d", &x);
    
    struct isi neo[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%s", neo[i].nama);
        scanf("%s", neo[i].peran);
        scanf("%d", &neo[i].stamina);
        
    }

    char cekNama[21];
    char cekPeran[21];
    scanf("%s", cekNama);
    scanf("%s", cekPeran);

    for (int i = 0; i <= x; i++)
    {
        if ((strcmp(neo[i].nama,cekNama) == 0 )&&(strcmp(neo[i].peran,cekPeran) == 0))
        {
            if (neo[i].stamina == 0)
            {
                printf("Yah, prajurit %s sudah tumbang sebagai %s :(", neo[i].nama, neo[i].peran);
                break;
            }
            else
            {
                printf("Prajurit %s masih berjuang sebagai %s dengan %d stamina!", neo[i].nama, neo[i].peran, neo[i].stamina);
                break;
            }
        }   
        else if (i==x) printf("Prajurit %s sebagai %s tidak terdapat pada basis data!",  cekNama, cekPeran); 
    }    
    return 0;
}