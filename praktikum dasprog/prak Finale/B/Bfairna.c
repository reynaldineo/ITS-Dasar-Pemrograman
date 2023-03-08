#include <stdio.h>
#include <stdlib.h>

int countpal(char *s) {
        int count = 0;
        int l= strlen(s);
        for(int i = 0; i < l; i++){
            for(int j = 0; i-j >= 0 && i+j < l && s[i-j] == s[i+j]; j++)count++; //substring s[i-j, ..., i+j]
            for(int j = 0; i-1-j >= 0 && i+j < l && s[i-1-j] == s[i+j]; j++)count++; //substring s[i-1-j, ..., i+j]
        }
        return count;
}
int main()
{
    char str[100000];
    scanf("%s",str);
    printf("%d",countpal(str));

}
