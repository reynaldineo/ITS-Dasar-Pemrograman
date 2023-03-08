#include <stdio.h>
#include <string.h>

int palindrome (char string[101], int i, int j) {

    int x = strlen(string);

    if (x%2 == 0) {
        if (string[i] == string [j]) {
            if (j-i == 1) return 1;
            else return palindrome(string, i+1, j-1);
        }
        else return 0;
    }
    else {
        if (string[i] == string [j]) {
            if (j == 1) return 1;
            else return palindrome(string, i+1, j-1);
        }
        else return 0;
    }
}


int main () {

    char string [101];
    scanf("%s", string);

    // huruf awal
    int i = 0;
    // huruf akhir
    int j = strlen(string)-1;

    int hasil = palindrome(string, i ,j);

    if (hasil == 0) printf("BUKAN");
    else printf("YA");

    return 0;
}