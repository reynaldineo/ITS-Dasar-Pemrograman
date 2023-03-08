#include<stdio.h>
#include<math.h>

int main (){

    int n; //input
    scanf("%d", &n);

    //int k = 0;
    int status = 0;
    int duapangkatk = 1;

    while (duapangkatk <= n) //ngecek 1 <= input
    {
        if (duapangkatk ==n){
            printf("ya");
            break;
        }
//        k++;
        duapangkatk *= 2;
    }
    if (duapangkatk>n){
        printf("bukan");
    }

}
