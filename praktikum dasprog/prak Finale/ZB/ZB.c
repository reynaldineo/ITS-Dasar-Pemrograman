#include <stdio.h>

long long fpb(long long c, long long d){
    if(d==0) return c;
    return fpb(d, c%d);
}

long long cari(long long a, long long b, long long mod){
    if(b==0) return 1;

    long long x = cari(a, b/2, mod);
    x = (x*x)%mod;
    if(b&1)  x = (a*x)%mod;
    return x;
}

int main() {
    long long n, k, i;
    scanf("%lld %lld", &n, &k);
    long long mod = 1000000007;

    long long hasil = 0;
    for(i=0; i<n; i++) {
        hasil = (hasil + cari(k, fpb(i,n), mod))%mod;
    }
    hasil = (hasil*cari(n, mod-2, mod))%mod;
    printf("%lld", hasil);
    return 0;
}