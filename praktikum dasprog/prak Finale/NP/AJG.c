#include <stdio.h>
#include <string.h>

struct base
{
    int num, sum;
};


int prima(int n) {
    int k = 2;
    int sum = 0;
    while(k <= n) {
        if(n%k == 0) sum++;
        k++;
    }
    return sum;
}

int main() {
    int x, n;
    scanf("%d", &x);
    struct base data[1000];

    for(int k=0; k<x; k++) {
        int cek = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            scanf("%d", &data[i].num);
        }

        for(int i = 0; i < n; i++)
            data[i].sum = prima(data[i].num);

        for(int i = 0; i < n; i++) {
            if(data[i].sum != 1)
                continue;
            else
                printf("%d ", data[i].num);
            cek++;
        }
        if(cek == 0) printf("Unable to send Fever Slot Buckle.");
        else printf("\n");
    }
}
