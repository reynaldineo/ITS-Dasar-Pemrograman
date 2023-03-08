#include <stdio.h>

int cek(int n) {
    if(n <= 0)
        return n;
    if(n%15 == 0) 
        return cek(n-15);
    else
        return cek(n-11);
}

int main () {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++) {
        if(cek(arr[i]) == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}