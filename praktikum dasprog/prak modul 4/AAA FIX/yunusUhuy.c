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
    // ngisi jumlah akun dan total pegawai
    scanf("%d %d", &y, &x);

    struct bank isi[y];

    // ngisi akun bank
    for (int i = 0; i < y; i++)
    {   
        // ngisi batas akun itu terdiri dari brp pegawai
        scanf("%d", &isi[i].akun);
        for (int j = 0; j < isi[i].akun; j++) // ngulang sebatas akun yg udh di input sebelumnya
        {
            // ngisi id pegawainya 1 per 1
            scanf("%d", &isi[i].idPegawai[j]);
        }
        // ngebuat isi saldo akun i nya 0 (akun 1 dan 2 dst..)
        isi[i].saldo = 0;
    }

    char input[100];
    int cekID;
    int saldoTemp;
    
    // MULAI LOOP MASUKIN TRANSAKSI 
    while(1)
    {
        // MASUKIN input TRANSAKSI
        scanf("%s", input);

        // kalau inputnya sama dengan transaksi MAKA 
        if (strcmp(input, "transaksi") == 0)
        {
            // input cekID (buat nnti ngecek mau di masukin ke id mana)
            // dan input saldoTemo (yg nnti di masukin terus ke saldo Total)
            scanf("%d %d", &cekID, &saldoTemp);
            for (int i = 0; i < y; i++)
            {
                for (int j = 0; j < isi[i].akun; j++)
                {
                    // ngecek inputan CEKID tadi itu sama kayak idPegawai yg mana
                    if (cekID == isi[i].idPegawai[j])
                    {   
                        // masukin nilai saldo akhir = saldo + saldoTemp (yg di input tadi)
                        isi[i].saldo = isi[i].saldo + saldoTemp;
                    }
                }
            }
        }

        // kalau inputnya tampilkan, maka keluar dari loop
        else if (strcmp(input, "tampilkan") == 0)
        {
            break;
        }  
    }

    // ngeprint isi saldo akhir dari akunnya masing2
    for (int i = 0; i < y; i++)
    {
        printf("%d: %d\n", i+1, isi[i].saldo);
    }
    return 0;
}