#include<stdio.h>

int main() {

    int banyak, jeda, nori, rino, count = 0;
    scanf("%d %d", &banyak, &jeda);
    char A [banyak];

    for (int x = 0; x < banyak ; x++) {
        scanf("%d", &A[x]); // input waktu serang rino detik brp aja
    }

    for (int i = 0; i < banyak; i++) {
        nori = (A[i]) + jeda; // waktu nyerang nori = detik rino nyerang + jeda detik

        for(int j = i; j < banyak ; j++) {
            rino = A[j]; // definisiin detik rino nyerang
            // waktu nyerang nori = rino
            if (nori == rino) count +=1; // di itung brp kali mereka nyerang bareng
    
			else if(A[j]-A[i]>jeda)
            break;
        }
    }
    printf("%d", count);
    return 0;
}
