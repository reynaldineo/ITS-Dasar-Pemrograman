#include <stdio.h>

int main () {

    int N, hasilz;
    int arr[10];

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
    }


    return 0;
}
