#include <stdio.h>

struct data
{
  char scripture[1000];
  char LR;  
};


int main () {
    // banyaknya amet
    int x;
    scanf("%d", &x);

    struct data neo[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%s", neo[i].scripture);
        scanf("%c", neo[i].LR);
        
    }
    
    for (int i = 0; i < x; i++)
    {
        printf("%d", neo[i].scripture);
        printf("%c\n", neo[i].LR);
        
    }
    

    return 0;
}