#include<stdio.h>
int banyak, hasil;
int uang[21], sedikit = 21;

void samaGa (int ngecek, int jumlah, int sekarang){
    if (ngecek < banyak && jumlah < hasil){
        printf("\ncek ke = %d; tot = %d; ke = %d AWAL\n", ngecek, jumlah, sekarang);
        samaGa(ngecek+1, jumlah, sekarang);
        printf("cek ke = %d; tot = %d; ke = %d TENGAH\n", ngecek, jumlah, sekarang);
        samaGa(ngecek+1, jumlah+uang[ngecek+1], sekarang+1);
        printf("cek ke = %d; tot = %d; ke = %d AKHIR\n\n", ngecek, jumlah, sekarang);
    }
    else if (jumlah == hasil && sekarang < sedikit){
        printf("output %d %d %d\n", ngecek, jumlah, sekarang);
        sedikit = sekarang;
        printf("output akhir %d %d %d\n", ngecek, jumlah, sekarang);
    }
}

int main (){

    scanf("%d %d", &banyak, &hasil);

    for (int i = 1; i <= banyak ; i++){
        scanf("%d", &uang[i]);
    }
    samaGa(0,0,0);
    printf("%d", sedikit);
}