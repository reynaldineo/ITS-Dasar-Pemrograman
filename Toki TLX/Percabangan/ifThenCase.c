#include <stdio.h>

int main(){

    int x;
    scanf("%d", &x);

    switch (x)
    {
    case 0 ... 9:
        printf("satuan");
        break;
    case 10 ... 99:
        printf("puluhan");
        break;
    case 100 ... 999:
        printf("ratusan");
        break;
    case 1000 ... 9999:
        printf("ribuan");
        break;
    case 10000 ... 99999:
        printf("puluhribuan");
        break;
    
    default:
        break;
    }


    return 0;
}