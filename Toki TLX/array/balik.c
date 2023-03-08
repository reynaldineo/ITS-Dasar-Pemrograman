#include <stdio.h>
int main () {
    int n, x[101];
    while (scanf("%d", &x[n]) != EOF )
    {
        n++;
    }
    
     for (int i=n-1 ; i >= 0; i--)
    {
        printf("%d\n", x[i]);
    }

    return 0;
}