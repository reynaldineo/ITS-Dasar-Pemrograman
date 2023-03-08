#include <stdio.h>
#include <string.h>

struct jumlahAkun
{
    int isiPegawai;
};

// struct jumlahPegawai
// {
//     int arr[201];
// };


int main () {


    int jmlhAkun;
    scanf("%d", &jmlhAkun);

    int totPegawai;
    scanf("%d", &totPegawai);

    // database brp jumlah akunnya
    struct jumlahAkun a[jmlhAkun];

    // database isi pegawainya apa aja
    struct jumlahPegawai b[jmlhAkun];

    int arr[200][200]; 

    for (int i = 0; i < jmlhAkun; i++)
    {
        printf("masukin total pegawai %d = ", i);
        scanf("%d", &a[i].isiPegawai);

        for (int j = 0; j < a[i].isiPegawai; j++)
        {
            printf("masukin isi pegawai %d = ", j);
            scanf("%d", &arr[i][j]);
        }   
    }

    // test print
    for (int i = 0; i < jmlhAkun; i++)
    {
        printf(" isi pegawai = %d, ", a[i].isiPegawai);

        for (int j = 0; j < a[i].isiPegawai; j++)
        {
            printf("%d ", arr[i][j]);
        }
        
    }
    

    int cekPegawai, saldo, totalSaldo;
    char kode[100];
    scanf("%s", kode);

    int cekPegawai, isiSaldo;

    if (strcmp(kode,"transaksi" == 0))
    {
        scanf("%d %d", &cekPegawai, isiSaldo);
        for (int i = 0; i < ; i++)
        {
            /* code */
        }
        
    }
    
    
    

    
    return 0;
}