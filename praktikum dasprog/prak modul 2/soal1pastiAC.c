#include<stdio.h>
#include<string.h>

int main (){
    int a, b = 0;
    char A[1000];
    scanf("%d\n", &a);
    for (int i = 0; i < a; i++){  
        gets(A);
        for(int k = 0; A[k] != '\0'; k++){
            if (A[k] == ' ') continue;
            else if(A[k] == 'a' || A[k] == 'i' || A[k] == 'u' || A[k] == 'e' || A[k] == 'o') b++;
            else b = 0;
            if (b == 4) break;

        }
        if (b > 3) printf("Solid Script\n");
        else printf("Fake Script\n");
        b = 0;
    }
    return 0;
}