#include<stdio.h>
int banyak, hasil;
int uang[21], sedikit = 21;

void samaGa (int ngecek, int jumlah, int sekarang){
    if (ngecek < banyak && jumlah < hasil){
        samaGa(ngecek+1, jumlah, sekarang); // yg atas buat ngeskip nilai biar lanjut terus ke nilai berikutnnya
        samaGa(ngecek+1, jumlah+uang[ngecek+1], sekarang+1); // yg bawa buat ngebandingin nilainya
    }
    else if (jumlah == hasil && sekarang < sedikit){
        sedikit = sekarang;
    }
}

int main () {

    scanf("%d %d", &banyak, &hasil);

    for (int i = 1; i <= banyak ; i++){
        scanf("%d", &uang[i]);
    }
    samaGa(0,0,0);
    printf("%d", sedikit);
}