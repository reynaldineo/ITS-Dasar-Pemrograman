#include<stdio.h>

int smooch(int n)
{
    if(n <= 0){
        printf("%d\n", n);
        return n;}
    if(n%15 == 0) {
        printf("-15 %d\n", n);
        return smooch(n-15);}
    else
        printf("-11 %d\n", n);
        return smooch(n-11);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
    {scanf("%d", &arr[i]);}

    for(int i = 0; i < n; i++)
    {
        // printf("%d", arr[i]);
        if(smooch(arr[i]) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
