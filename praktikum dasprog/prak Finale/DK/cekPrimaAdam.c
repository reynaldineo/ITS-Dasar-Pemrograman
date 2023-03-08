#include <stdio.h>

int main () {
    int x,stat;
    scanf("%d", &x);

    for(int j = 0 ;j < x; j++)
    {
            for(int k = 1; k <= x; k++)
            {
                if(a[j].lt%k == 0)
                    a[j].sumlt++;
                //printf("k = %d, sumlt = %lli\n", k, a[j].sumlt);
            }
            for(int k = 1; k <= a[j].at; k++)
            {
                if(a[j].at%k == 0)
                    a[j].sumat++;
                //printf("k = %d, sumat = %lli\n", k, a[j].sumat);
            }
    }


    return 0;
}