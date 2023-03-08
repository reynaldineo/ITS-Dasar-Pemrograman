#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[1000], lon[10], lat[10];
    long long lt, at;
    long long sumat,sumlt;
}place;

int main()
{
    char lookfor[1000][1000];
    long long n, m;
    int exist[1000]={0};
    scanf ("%lli %lli", &n, &m);

    place a[1000];

    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %s", a[i].name, a[i].lon, a[i].lat);
        a[i].lt = atoi(a[i].lon);
        a[i].at = atoi(a[i].lat);
    }

    for(int i = 0; i < m; i++)
        scanf("%s", lookfor[i]);

    for(int j = 0 ;j < n; j++)
    {
            for(int k = 1; k <= a[j].lt; k++)
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

    for(int i = 0; i < m; i++)
    {
        int cek =0;
        for(int j = 0; j < n; j++)
        {
            if(strcmp(lookfor[i], a[j].name)==0)
            {
                // exist[i] = 1;
                cek++;
                if(a[j].sumlt == 2 && a[j].sumat == 2)
                {
                    printf("%s aman! Bangunlah Kesatria!\n", a[j].name);
                }
                else
                    printf("%s tidak aman! Ini pasti ulah Gorgom!\n", a[j].name);
            }

        }
        //printf("%d", exist[i]);
        if(cek == 0)
            printf("Tempat apa itu? Kotaro tidak tahu!\n");
    }
}
