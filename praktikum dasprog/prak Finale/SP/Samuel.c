#include <stdio.h>

struct base
{
    int angka;
};


int main () {
    int n;
    scanf("%d", &n);

    struct base data[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i].angka);
    }

    for (int i = 0; i < n; i++)
    {
        if (data[i].angka % 2 == 0)
        {
            printf("%d\n", data[i].angka*2-1);
        }
        else if (data[i].angka % 2 == 1)
        {
            printf("%d\n", data[i].angka*2+1);
        }
    }


    return 0;
}
