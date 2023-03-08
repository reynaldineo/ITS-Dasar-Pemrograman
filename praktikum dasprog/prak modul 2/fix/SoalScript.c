#include <stdio.h>
#include <string.h>

int main () {
    
    char s[1000]; 

    int x; 
    scanf("%d\n", &x);

    int cek = 0; 

    for (int i = 0; i < x; i++) 
    {
        gets(s);
        for (int isi = 0; s[isi] != '\0'; isi++) 
        {
            if (s[isi] == ' ') continue; 
            else if (s[isi] == 'a'|| s[isi] == 'i' || s[isi] == 'u' || s[isi] == 'e' || s[isi] == 'o') cek++; 
            else cek = 0; 

            if (cek == 4) break;
        }

        if (cek >= 4) printf("Solid Script\n");
        else printf("Fake Script\n");
        cek = 0;
    }
    return 0;
}