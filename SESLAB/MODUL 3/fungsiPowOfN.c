#include <stdio.h>

int powOf2 (int n, int m) {
 int i, angka;

   for ( i = 0; i < m; i++)
   {
     angka *= n ;
   }


  // return angka;
}

int main (){
    int x,y;
    scanf("%d %d"), &x,  &y;

    printf("%d", powOf2(x,y)); // powOf2 nya harus ada (parameter)

    return 0;
}
