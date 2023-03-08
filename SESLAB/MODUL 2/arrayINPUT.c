#include <stdio.h>  

    int main () {
        
        int x;
         scanf("%d", &x);

        int a[x];

        int i;
        for (i = 0; i < x; i++)
        {
            scanf("%d", &a[i]);
        }
        
        for (i = 0; i < x; i++)
        {
            printf("%d", a[i]);
        }


        return 0;
    }