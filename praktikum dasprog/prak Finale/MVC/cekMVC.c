#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void swap(char *xp, char *yp) {
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void bubblesort(char arr[], char n) {
   int i, j, swapped;
   for (i = 0; i < n-1; i++) {
      for (j = 0; j < n-i-1; j++){
         if (arr[j] < arr[j+1]) {
            swap(&arr[j], &arr[j+1]);
            swapped = 1;
         }
      }
      if (swapped==0)break;
   }
}
int main()
{
    char num[100];
    int digit;
    scanf("%s",num);
    scanf("%d",&digit);
    char temp[digit];
    char hasil[digit];

    for(int i=0;i<digit;i++){
        if(temp[i]='0'){
            hasil[i]='0';
        }
    }

    int batasCek = strlen(num)-digit+1
    for(int i=0;i< batasCek; i++){
        for(int j=0;j<digit;j++){
            temp[j]=num[j+i];
        }
        bubblesort(temp,digit);
        if(strcmp(temp,hasil)>0){
            strcpy(hasil,temp);
        }
    }

    for(int i=0;i<digit;i++){
        printf("%c",hasil[i]);
    }
}
