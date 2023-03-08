#include<stdio.h>

void balik(int *x, int a){
    for(int i = a-1; i >=0; i--){
        printf("%d ", x[i]);
    }
}

int main(){
    int a;
    scanf("%d", &a);
    int b[a];

    for(int i = 0; i < a; i++){
        scanf("%d", &b[i]);
    }
    balik(b, a);
}