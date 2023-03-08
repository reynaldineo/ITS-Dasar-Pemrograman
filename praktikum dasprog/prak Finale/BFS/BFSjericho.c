#include <stdio.h>
#include <string.h>

char arr[32];

void basis(long long x, int ke)
{
    char hasil;
    int mod;
    mod = x % 2;
    if (x == 0)
    {
        return;
    }

    else
    {
        hasil = '0' + mod;
    }

    x = x / 2;
    basis(x, ke + 1);
    arr[ke] = hasil;
}

int main()
{
    long long t, a;
    scanf("%lld %lld", &t, &a);
    while (t--)
    {   
        memset(arr,'0',sizeof(arr));
        long long b, ubah;
        scanf("%lld %lld", &ubah, &b);
        ubah--;
        if (ubah >= 0)
        {
            a ^= 1 << ubah;
        }
        basis(a ^ b, 0);
        int count = 0;
        char temp = '0';
        for (int i = 0; i < strlen(arr); i++)
        {
            if (arr[i] == '1' && arr[i] != temp)
            {
                count++;
            }
            temp = arr[i];
        }
        a = b;
        printf("%lld\n", count);
    }
}