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
      if (swapped==0)break;
   }
}

int main() {
    char num[100]; // pakai char biar bisa ngitung panjangnya nnti di strlen
    int digit;
    scanf("%s", num);
    scanf("%d", &digit);

    char temp[digit], hasil[digit];

    // for(int i=0;i<digit;i++){ // ngisi setiap string kosong, biar nnti bisa di timpa angka
    //     if(temp[i]='0'){
    //         hasil[i]='0';
    //     }
    // }

    int batasCek = strlen(num)-digit+1; // rumus 

    for(int i=0; i< batasCek; i++) { // ngulang selama batascek
        for(int j=0; j<digit; j++) { // ngulang per digit input pengennya brp
            temp[j]=num[j+i]; // j+i itu biar maju terus 1 per 1, (123) 1+2 jadi 2+3
        }
        bubblesort(temp,digit); 
        if(strcmp(temp,hasil)>0) { // kalau temp lebih dri hasil
            strcpy(hasil,temp);
        }
    }

    for(int i=0; i<digit; i++){
        printf("%c", hasil[i]);
    }
}
