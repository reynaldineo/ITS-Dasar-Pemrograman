#include <stdio.h>

// int reverse (int arr[5], int x){
//     int i;
    // for (i = x-1; i >= 0; i--)
    // {
    //     printf("%d ", arr[i]);
    // }

// }

int main () {

    int x = 5;
    int arr[x],i;

    for (i = 1; i <= x; i++)
    {
        scanf("%d", &arr[i]);
    }

    //reverse(arr, 5);

    int *ptr = arr;
     for (i = x-1; i >= 0; i--)
    {
        *(ptr+1) = arr[i];
    }

    for (i = 1; i <= x; i++)
    {
        printf("%d ", *(ptr+i));
        // printf("%d ", arr[i]);
    }

    return 0;
}
