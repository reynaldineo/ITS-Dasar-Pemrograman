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

    struct bank isi[y];

    // ngisi akun bank
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &isi[i].akun);
        for (int j = 0; j < isi[i].akun; j++)
        {
            scanf("%d", &isi[i].idPegawai[j]);
        }
        isi[i].saldo = 0;
    }

    char input[100];
    int cekID;
    int saldoTemp;

    while(1)
    {
        scanf("%s", input);
        if (strcmp(input, "transaksi") == 0)
        {
            scanf("%d %d", &cekID, &saldoTemp);
            for (int i = 0; i < y; i++)
            {
                for (int j = 0; j < isi[i].akun; j++)
                {
                    if (cekID == isi[i].idPegawai[j])
                    {
                        isi[i].saldo = isi[i].saldo + saldoTemp;
                    }
                }
            }
        }

        else if (strcmp(input, "tampilkan") == 0)
        {
            break;
        }  
    }

    for (int i = 0; i < y; i++)
    {
        printf("%d: %d\n", i+1, isi[i].saldo);
    }
    return 0;
}