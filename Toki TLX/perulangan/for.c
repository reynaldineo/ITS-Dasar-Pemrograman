#include <stdio.h>

int main (){

    int x;
    scanf("%d", &x);
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d\n", arr[i]);
    }
    
    printf(" ")

    return 0;
}