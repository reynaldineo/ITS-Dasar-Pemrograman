#include<stdio.h>

int main() {

    int banyak, jeda, nori, rino, itung = 0;
    scanf("%d %d", &banyak, &jeda);
    int A [banyak];

    for (int x = 0; x < banyak ; x++) {
        scanf("%d", &A[x]); 
    }

    for (int i = 0; i < banyak; i++) {
        nori = A[i] + jeda;

        for(int j = i; j < banyak ; j++) {
            rino = A[j];
            
            if (nori == rino) itung++; 
         
			else if(A[j]-A[i]>jeda) break;
        }
    }
    printf("%d", itung);
    return 0;
}
