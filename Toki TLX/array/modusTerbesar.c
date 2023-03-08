#include <stdio.h>

int main () {

    int x;
    printf("masukin x ");
    scanf("%d", &x);
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        printf("masukin data ");
        scanf("%d", &arr[i]);
    }

    int flag = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = i; i < x; j++)
        {
            if (arr[i] == arr [j])
            {
                printf("i = %d j = %d\n", arr[i], arr[j]);
                flag++;
            }

        }

    }

    printf("nilai %d", flag);




    return 0;
}
