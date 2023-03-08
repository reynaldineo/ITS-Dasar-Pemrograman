#include <stdio.h>
#include <string.h>

int main () {
    char s[101];
    scanf ("%s", s);

    int x = strlen(s)-1;
   
    int cek = 0;

    for (int i = 0; i < (x/2); i++) {
        if (s[i] != s[x-i]) {
            cek++;
            break;
        }
    }
    
    if (cek == 0) printf("YA");
    else printf ("BUKAN");
    return 0;
}