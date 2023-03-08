#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    int n,i;
    char b[100][100];
    char sub[100];
    printf("masukkan jumlah buku: ");
    scanf("%d",&n);
    char enter;
    scanf("%c",&enter);
    for(i=1; i<=n;i++){
        printf("judul %d: ",i);
        fgets(b[i],sizeof(b[i]),stdin);
        b[i][strlen(b[i])-1]='\0';//mengganti indeks terakhir enter dengan null
    }
    int menu;
    while (menu !=2){
        printf("\n\n");
        printf("ketik nomor menu:\n");
        printf("0. print buku\n");
        printf("1. cari buku\n");
        printf("2. exit\n");
        printf(" ketik menu: ");
        scanf("%d",&menu);
        if (menu == 0){
            printf("Judul buku\n");
            for(int i=1;i<=n;i++){
                printf("\t%d. %s\n",i,b[i]);
            }
        }
        else if(menu ==1){
            int c;
            int  hasil;
            printf("\tKetik subjudul buku: ");
            scanf("%s",sub);
            for(int i=1;i<=n;i++){
                if(strstr(b[i],sub)!= NULL){//mencari substring supaya ngecek satu string, null artinya ditemukan
                    hasil=b[i];
                    c=1;
                    break;
                }
                else{
                    c=0;
                }
            }
            if(c==1){
                printf("\tbuku ada: %s",hasil);
            }
            else{
                printf("\tkata %s tidak ada dalam judul",sub);
            }

        }
        else if(menu == 2){
            break;
        }
        else{
            printf("\tAnda tidak memilih menu dengan benar");
        }


    }
    return 0;
}
