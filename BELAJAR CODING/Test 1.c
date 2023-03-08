#include <stdio.h>

void main(){

    char orang[20];

    printf("Siapa nama kamu? \n");
    scanf("%s", &orang);
    printf("\n %s yang mau di bonceng chalvin? ", orang);
    printf("\n iya bener kak \n\n");
    scanf("\n %s", &orang);
    printf("\n engga jadi kak, dianya mau tapi malu kak \n ", orang);

    return 0 ;
}
