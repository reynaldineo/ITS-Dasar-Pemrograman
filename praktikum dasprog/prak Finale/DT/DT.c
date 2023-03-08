#include <stdio.h>


void swap(int *xp, int *yp) {
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void bubbleSort(int arr[], int n, int *cek) {
   int swapped;   
   for (int i = 0; i < n-1; i++) {
      swapped = 0;
      for (int j = 0; j < n-i-1; j++) {
         if (arr[j] > arr[j+1]) {
            swap(&arr[j], &arr[j+1]);
            swapped = 1;
            *cek += 1;
         }
      }
      if (swapped == 0)
         break;
   }
}

int main () {
    while (1){
        int n;
        scanf("%d", &n);
        if (n == 0) break;

        int arr[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        }
        int cek = 0;
        bubbleSort(arr, n, &cek);
        printf("Minimal lakukan %d pertukaran\n", cek);
        
        for (int i = 0; i < n; i++) {
            if (arr[i]%2 == 0 && arr[i]%10 != 0)  printf("Yeay\n");
            else if (arr[i]%5 == 0 && arr[i]%10 != 0) printf("lulus\n");
            else if (arr[i]%10 == 0)  printf("Yeay Lulus dasprog\n");
            else printf("%d\n", arr[i]);
        }
    }
    return 0;
}