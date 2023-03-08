#include <stdio.h>
#include <string.h>

char arr[32];

void basis(int x, int ke) {
    char hasil;

    int mod = x % 2;
    if (x == 0) return;
    else hasil = '0' + mod;

    x = x / 2;
    basis(x, ke + 1);
    arr[ke] = hasil;
}

int main() {
    int t, a;
    scanf("%d %d", &t, &a);

    for (int i=0; i<t; i++) {   
        memset(arr,'0',sizeof(arr));
        int ubah, tujuan;
        scanf("%d %d", &ubah, &tujuan);
        ubah--;
        if (ubah >= 0) {
            a ^= 1 << ubah;
        }
        basis(a ^ tujuan, 0);
        int count = 0;
        char temp = '0';
        for (int i = 0; i < strlen(arr); i++) {
            if (arr[i] == '1' && arr[i] != temp) {
                count++;
            }
            temp = arr[i];
        }
        a = tujuan;
        printf("%d\n", count);
    }
    return 0;
}