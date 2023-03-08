#include <stdio.h>

int main () {

    int cekPegawai, saldo, totalSaldo;
    char transaksi [8];
    char batas [9] = "tampilkan";
    while (scanf("%s", transaksi) != batas)
    {
        scanf("%d %d", &cekPegawai, &saldo)
        printf("%s %d %d", transaksi, cekPegawai, saldo);
    }
    
    return 0;
}