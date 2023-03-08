#include <stdio.h>
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
      if (swapped==0) break;
   }
}

int main() {
    char angka[100]; 
    scanf("%s", angka);
    int digit;
    scanf("%d", &digit);

    char temp[digit], hasil[digit];
    int batasCek = strlen(angka)-digit+1; 

    for(int i=0; i< batasCek; i++) { 
        for(int j=0; j<digit; j++) { 
            temp[j]=angka[j+i]; 
        }
        bubblesort(temp,digit); 
        if(strcmp(temp,hasil)>0) {
            strcpy(hasil,temp);
        }
    }

    for(int i=0; i<digit; i++){
        printf("%c", hasil[i]);
    }
    return 0;
}
