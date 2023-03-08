#include <stdio.h>

int main () {
    int bilangan,stat;
    scanf("%d", &bilangan);

    if(bilangan == 2 ) {
        printf("%d merupakan bilangan prima.", bilangan);
    } 
    
    else {
        for(int angka=2; angka<bilangan; angka++){
            if(bilangan %angka == 0){
                stat = 0;
                break;
            } 
            else {
                stat = 1;
            }
        }
    }

    if(stat == 0){
        printf("%d  bukan bilangan prima.\n", bilangan);
    }
    else {
        printf("%d  bilangan prima.", bilangan);}
    return 0;
}