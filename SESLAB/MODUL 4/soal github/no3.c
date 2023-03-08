#include <stdio.h>

int reverse (int arr[5], int x){
    int i;
    for (i = x-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

}

int main () {

    // int x,i;
    // scanf("%d", &x);
    int arr[5],i;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr, 5);

    return 0;
}
