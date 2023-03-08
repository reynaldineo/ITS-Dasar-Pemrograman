#include <stdio.h>

struct data
{
    char judul [100];
    char penulis [100];
    int tahunRilis;
};

int main ()
{
    printf("Masukkan jumlah buku: ");
    int x;
    scanf("%d", &x);

    struct data neo [x];

    for (int i = 0; i < x; i++)
    {
        printf("\n");

        printf("judul %d: ", i+1);
        fflush(stdin);
        gets(neo[i].judul);

        printf("penulis %d: ", i+1);
        fflush(stdin);
        gets(neo[i].penulis);

        printf("tahun rilis %d: ", i+1);
        scanf("%d", &neo[i].tahunRilis);
    }

    while (1)
    {
        printf("\nketik nomor menu:\n");
        printf("0. print buku\n");
        printf("1. cari buku\n");
        printf("2. exit\n");
        
        int menu;
        printf(" ketik menu: ");
        scanf("%d", &menu);

        if (menu == 0)
        {
            printf("Daftar buku, penulis, dan tahun:\n");
            printf("Terdapat %d buku\n", x);
            for (int i = 0; i < x; i++)
            {
                printf("\t%d: %s", i+1, neo[i].judul);
                printf(" - %s", neo[i].penulis);
                printf(" - %d\n", neo[i].tahunRilis);
            }
        }

        else if (menu == 1)
        {
            printf("\tKetik range tahun buku: ");
            int tahunAwal;
            int tahunAkhir;

            scanf("%d %d", &tahunAwal, &tahunAkhir);
            int cek = 0;

            for (int i = 0; i < x; i++)
            {
                if ((neo[i].tahunRilis >= tahunAwal) && (neo[i].tahunRilis <= tahunAkhir))
                {
                    printf("\t%s", neo[i].judul);
                    printf(" - %s\n", neo[i].penulis);
                    cek++;
                }
            }
            if (cek == 0) { printf(" Tidak ada record, silahkan memilih menu kembali :)\n"); }
        }

        else if (menu == 2)
        {
            printf(" Anda telah keluar dari program, terimakasih :)\n");
            break;
        }

        else
        {
            printf("Anda tidak memilih menu dengan benar, silahkan memilih menu kembali :)\n");
        }
    }

    return 0;
}
