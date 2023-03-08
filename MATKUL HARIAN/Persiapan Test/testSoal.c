#include <stdio.h>

struct data
{
    char judul [100];
};


int main () 
{
    printf("masukkan jumlah buku: ");
    // jumlah buku
    int x;
    scanf("%d", &x);

    // buat data base menggunkaan struck sebanyak x data
    struct data neo [x];

    // perulanagan input judul bukua
    for (int i = 0; i < x; i++)
    {
        printf("judul %d: ", i+1);
// revisi pakai GETS
    // buat gets 0 nya ga kebaca
        fflush(stdin);

        gets(neo[i].judul);
        // scanf("%s", neo[i].judul);
    }

// REVISI nnti pakai while biar programnya jalan terus sampai pilih menu keluar

    while (1)
    {
        printf("\nketik nomor menu:\n");
        printf("0. print buku\n");
        printf("1. cari buku\n");
        printf("2. exit\n");
        // menu
        int menu;
        printf(" ketik menu: ");
        scanf("%d", &menu);

        if (menu == 0)
        {
            printf("Judul buku\n");
            // ngeprint semua judul buku yang ada di data base
            for (int i = 0; i < x; i++)
            {
                printf("\t%d: %s\n", i+1, neo[i].judul);
            }
        }

        else if (menu == 1)
        {
            printf("\tKetik subjudul buku: ");
            char subjudul[100];
            // cari subjudul
            char ret;
            scanf("%s", subjudul);
    // lanjut nntn di yt bapak, kemaren ada di contohin
            for (int i = 0; i < x; i++)
            {
                // fungsi untuk mencari ada subjudul yg cocok dengan judul apa tidak
                if (ret = strstr(neo[i].judul, subjudul))
                {
                    printf("\tbuku ada: %s\n", neo[i].judul);
                }   
            }
        }

        else if (menu == 2)
        {
            printf("Anda keluar\n");
            break;
        }

        else
        {
            printf("Anda tidak memilih menu dengan benar\n");
        }
    }

    return 0;
}
