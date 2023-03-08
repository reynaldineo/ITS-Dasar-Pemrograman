#include <stdio.h>
#include <math.h>

    int main() {

        int x; 
        scanf("%d", &x);

        float akarKoma; 
        akarKoma = sqrt(x);

        int akar;
        akar = akarKoma; 

        if (akarKoma == akar) 
        {
            printf("buka\\/");
            long long y = x*x; 
            y = y*(x+1)*(x+1)/4;
            printf("\n%lld", y);
        }
        
        else
        {
            printf("tutup/\\");
        }
        
        return 0;
    }