#include <stdio.h>

long long mencari1(long long p, long long q){
    if(q==0){
        return p;
    }
    return mencari1(q, p%q);
}

long long mencari2(long long a, long long b, long long mod){
    if(b==0){
        return 1;
    }
    long long x = mencari2(a, b/2, mod);
    x = (x*x)%mod;
    if(b&1){
        x = (a*x)%mod;
    }
    return x;
}

int main(){
    long long N, K, i;
    scanf("%lld %lld", &N, &K);

    long long hasil = 0;
    long long mod = 1000000007;

    for(i=0; i<N; ++i){
        hasil = (hasil + mencari2(K, mencari1(i,N), mod))%mod;
    }
    hasil = (hasil*mencari2(N, mod-2, mod))%mod;
    printf("%lld", hasil);

}