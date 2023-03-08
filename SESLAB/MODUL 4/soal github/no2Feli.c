#include <stdio.h>
#include <string.h>

struct nilai {
    char nama[100];
    int mat, ipa, bindo, bing;
};

int main()
{
    int n,m,i,j;
    char namascr[100];
    scanf("%d",&n);
    struct nilai arr[n+1];

    for(i=0;i<n;i++) {
        scanf("%s %d %d %d %d",arr[i].nama,
        &arr[i].mat,&arr[i].ipa,&arr[i].bindo,&arr[i].bing);       
    }
/*    
    for(i=0;i<n;i++) {
        printf("%s\n", arr[i].nama);
        printf("%d\n", arr[i].mat);
        printf("%d\n", arr[i].ipa);
        printf("%d\n", arr[i].bindo);
        printf("%d\n", arr[i].bing);
    }
*/
    scanf("%d",&m);
    for(j=0;j<m;j++) {
        int scr=0;
        scanf("%s",namascr);

        for(i=0;i<n;i++) {
            if (strcmp(arr[i].nama, namascr) == 0) {
                printf("Nilai %s\n",namascr);
                printf("Matematika\t: %d\n", arr[i].mat);
                printf("IPA\t\t: %d\n", arr[i].ipa);
                printf("B. Indonesia\t: %d\n", arr[i].bindo);
                printf("B. Inggris\t: %d\n", arr[i].bing);
                scr=1;
            }
        }
        if(scr==0) {
            printf("Nilai %s tidak ditemukan\n",namascr);
        }
    }
   
    return 0;
}