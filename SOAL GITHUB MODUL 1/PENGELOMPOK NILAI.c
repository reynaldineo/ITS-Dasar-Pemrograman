#include <stdio.h>

int main() {
    
    int nilai;
    scanf("%d", &nilai);

    switch(nilai) {
        case 0 ... 39:
            printf("E\n");
            break;
        case 40 ... 59:
            printf("D\n");
            break;
        case 60 ... 79:
            printf("C\n");
            break;
        case 80 ... 85:
            printf("B\n");
            break;
        case 86 ... 100:
            printf("A\n");
            break;
        default:
            printf("Nilai yang di masukan melebih batas\n");
            break;
        // default:
        //     printf("A\n");
        //     break;           
    }
    return 0;
}

