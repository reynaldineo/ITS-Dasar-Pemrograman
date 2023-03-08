#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NUM_BITS_INT (sizeof(int) * 8)

int bitflip(int n, int m) {
    int sum = 0;
    bool condition = false;
    int a, b;
    for (int i = NUM_BITS_INT - 1; i >= 0; i--){
        a = (n >> i) & 1;
        b = (m >> i) & 1;

        if (a == b && condition){
            condition = false;
            sum++;
        }
        if (a != b && i != 0){
            condition = true;
        }
        else if (a != b && i == 0){
            condition = true;
            sum++;
        }
    }
    return sum;
}

int main(){
    int T, A, flip, aim, swap;
    scanf ("%d %d", &T, &A);

    for(int i=0; i<T; i++) {
        scanf("%d", &flip);
        if(flip != 0) {
            A ^= (1 << flip - 1);
        }
        scanf("%d", &aim);
        swap = bitflip(A, aim);
        A = aim;
        printf ("%d\n", swap);
    }
    return 0;
}