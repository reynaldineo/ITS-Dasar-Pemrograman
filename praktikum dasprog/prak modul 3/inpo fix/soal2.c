#include<stdio.h>
int a, b;
int c[10000], jadi = 5000;

void samaGa (int cekKe, int tot, int ke){
    if (cekKe < a && tot < b){
        samaGa(cekKe+1, tot, ke);
        samaGa(cekKe+1, tot+c[cekKe+1], ke+1);
    }
    else if (tot == b && ke < jadi){
        jadi = ke;
    }
}

void ambilData(){
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a ; i++){
        scanf("%d", &c[i]);
    }
}


int main (){
    ambilData();
    samaGa(0,0,0);
    printf("%d", jadi);
}