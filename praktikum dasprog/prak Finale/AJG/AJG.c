#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool prima[100001];
void cekPrima(int n) {
    memset(prima, true, sizeof(prima));
    prima[1]=false;

    for (int p = 2; p * p <= n; p++) {
        if (prima[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prima[i] = false;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    cekPrima(100001);
    
    for(int i=0; i<n; i++) {
        int x;
        scanf("%d",&x);

        int arr[100001];
        for(int j=0; j<x; j++) {
            scanf("%d", &arr[j]);
        }

        int cek=0;
        for (int k=0; k<x; k++) {
			if(prima[arr[k]]== true) {
                printf("%d ",arr[k]);
                cek++;
            }
		}

        if(cek == 0) printf("Unable to send Fever Slot Buckle.\n");
        else printf("\n");
    }
    return 0;
}
