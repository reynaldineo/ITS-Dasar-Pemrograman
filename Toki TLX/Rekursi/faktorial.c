#include <stdio.h>

int faktorial2(int x) {
    int jawaban = 1;
    for (int i = 2; i <= x; i++) {
        jawaban *= i;
    }
    return jawaban;
}

int faktorial(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x * faktorial(x-1);
    }
}

int main () {

    int x;
    scanf("%d", &x);
    int hasil = faktorial(x);

    printf("%d", hasil);
    return 0;
}