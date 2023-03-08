#include <stdio.h>
#include <string.h>

struct base
{
    char isBerguna[10];
    int biaya;
};

int main () {

    int saldo;
    scanf("%d", &saldo);
    int n;
    scanf("%d", &n);

    struct base data[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", data[i].isBerguna);
        scanf("%d", &data[i].biaya);
        saldo -= data[i].biaya;
    }

    int poin = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp("Iya",data[i].isBerguna) == 0) {
            if (data[i].biaya <= 100000) {poin = poin + 1;}
            else if (data[i].biaya >= 100000 && data[i].biaya <= 500000) {poin = poin + 5;}
            else if (data[i].biaya >= 500000 && data[i].biaya <= 10000000) {poin = poin + 20;}
            else if (data[i].biaya >= 10000000 && data[i].biaya <= 500000000) {poin = poin + 35;}      
            else if (data[i].biaya >= 500000000) {poin = poin + 50;}
        }
        else if (strcmp("Tidak",data[i].isBerguna) == 0) {
            if (data[i].biaya <= 100000) {poin = poin - 1;}
            else if (data[i].biaya >= 100000 && data[i].biaya <= 500000) {poin = poin - 5;}
            else if (data[i].biaya >= 500000 && data[i].biaya <= 10000000) {poin = poin - 20;} 
            else if (data[i].biaya >= 10000000 && data[i].biaya <= 500000000) {poin = poin - 35;}       
            else if (data[i].biaya >= 500000000) {poin = poin - 50;}
        }
    }
    
    if (saldo <= 0) printf("Ujana tidak berakhir bahagia.");
    else if (poin > 0) printf("Ujana berakhir bahagia.");
    else if (poin == 0) printf("Ujana berakhir b aja.");
    else if (poin < 0) printf("Ujana tidak berakhir bahagia.");
    
    return 0;
}