#include<stdio.h>
int a, b, d;
int c[100], cek = 0;

void samaGa (int cekKe, int tot, int ke){
    if (cekKe < a && tot < d){
        //samaGa(cekKe+1, tot, ke);
        samaGa(cekKe+1, tot+c[cekKe+1], ke+1);
    }
    else if (cekKe <=a && tot == d && ke == b){
        cek = 1;
    }
}
void ambilData(){
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a ; i++){
        scanf("%d", &c[i]);
    }
    scanf("%d", &d);
}


int main (){
    ambilData();
	samaGa(0, 0, 0);
    if (cek == 1 ) printf("KoSimp boleh pulang");
    else printf("Kosimp belum boleh pulang:(");
}