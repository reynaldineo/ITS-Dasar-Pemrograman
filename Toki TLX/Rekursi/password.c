#include <stdio.h>
// permutasi iteratif 
void password () {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int k = 1; k <= 3; k++) {
                printf("%d%d%d\n",i, j, k);
            }
        }
    }
}

void tulis(int kedalaman) {
    if (kedalaman >= N) {   // base case
    // Cetak password
        for (int i = 0; i < N; i++) {
            printf("%d", catat[i]); // Cetak
            }
            printf("\n");
    } else {
    // Masuk ke lapisan lebih dalam
        for (int i = 1; i <= N; i++) {
            tulis(kedalaman + 1);
        }
    }
}

int main () {
    int N = 3;
    password();
    return 0;
}