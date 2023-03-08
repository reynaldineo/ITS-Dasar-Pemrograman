#include <stdio.h>
#include <string.h>

struct bank
{
    int akun;
    int idPegawai[200];
    int saldo;
};




int main () {
    // y = jumlah akun | x = total idPegawai
    int y, x;
    scanf("%d %d", &y, &x);
    printf("y = %d, x = %d\n", y, x);

    struct bank isi[y];

    // ngisi akun bank
    for (int i = 0; i < y; i++)
    {
        // printf("akun = ");
        scanf("%d", &isi[i].akun);
        for (int j = 0; j < isi[i].akun; j++)
        {
            // printf("isi = ");
            scanf("%d", &isi[i].idPegawai[j]);
        }
        isi[i].saldo = 0;
    }

    // for (int i = 0; i < y; i++)
    // {
    //     printf("%d :", isi[i].akun);
    //     for (int j = 0; j < isi[i].akun; j++)
    //     {
    //         printf("%d ", isi[i].idPegawai[j]);
    //     }
    //     printf("\n");
    // }

    char input[100];
    int cekID;
    int saldoTemp;


    while(1)
    {
        printf("input = ");
        scanf("%s", input);
        if (strcmp("transaksi", input) == 0)
        {
            scanf("%d %d", &cekID, &saldoTemp);
            printf("uhuy %d %d\n", cekID, saldoTemp);
            
            for (int i = 0; i < y; i++)
            {
                for (int j = 0; j < isi[i].akun; j++)
                {
                    if (cekID == isi[i].idPegawai[j])
                    {
                        isi[i].saldo = isi[i].saldo + saldoTemp;
                        printf("isi saldo %d\n", isi[i].saldo);
                    }
                }
            }
        }

        else if(strcmp("tamplikan", input) == 0) 
        {
            break;
        }

        // else if (strcmp("tampilkan", input) == 0)
        // {
        //     break;
        // }
        
        
    }

    for (int i = 0; i < y; i++)
    {
        printf("%d: %d\n", i+1, isi[i].saldo);
    }
    return 0;
}