#include <stdio.h>
int main() 8{
    int n;
    scanf("%d", &n);
    int k=0;
    int status=0;
    int duapangkatk=1;
    while (k<n)
    {
        if(duapangkatk==n)
        {
            printf("ya\n");
            status=1;
        }
        
        k++;
        duapangkatk=duapangkatk*2;
    }
    
    if (status==0)
    {
        printf("bukan\n");
    }
    
    return 0;
}
