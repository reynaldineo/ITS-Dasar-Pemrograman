#include <stdio.h>

void swap (long long *a, long long *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}

void bubsort(long long arr[], int n, long long *sum)
{
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(&arr[i], &arr[i+1]);
            i = -1;
            *sum += 1;
        }
    }
}

int main()
{

    int n;
    while(1)
    {
        long long sum = 0;
        scanf("%d", &n);
        if(n == 0)
            break;
        long long arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%lli", &arr[i]);
        }

        bubsort(arr, n, &sum);

        printf("Minimal lakukan %lli pertukaran\n", sum);

        for(int i = 0; i < n; i++)
        {
            if(arr[i]%2 == 0 && arr[i]%10 != 0)
                printf("Yeay\n");
            else if(arr[i]%5 == 0 && arr[i]%10 != 0)
                printf("Lulus\n");
            else if(arr[i]%10 == 0)
                printf("Yeay Lulus Dasprog\n");
            else
                printf("%lli\n", arr[i]);
        }
    }
}
