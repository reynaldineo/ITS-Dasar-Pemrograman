#include <stdio.h>
#include <string.h>

struct data
{
  char scripture[1000];
  char LR[100];
  int L;
  int R;
};


int main () {
    // banyaknya amet
    int x;
    scanf("%d", &x);

    struct data neo[x];
    // int i,j;

    for (int i = 0; i < x; i++)
    {
        scanf("%s %s", neo[i].scripture, neo[i].LR);
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d: %s\n", i, neo[i].scripture);
        printf("L atau R =%s\n", neo[i].LR);
    }

    neo[0].L = 0;
    neo[0].R = 0;
    // int panjang = strlen(neo[i].scripture);
    
    for (int i = 0; i < x; i++) // ngecek ke bawah
    {        // ngecek ke samping
    int panjang = strlen(neo[i].scripture);
        for (int j = 0; j < panjang; j++)
        {
            if (strcmp (neo[j].LR, "L"))
            {
                if (neo[j].scripture == '0'|| '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9' )
                    { neo[j].L++; }
            }
            
            if (strcmp (neo[j].LR, "R"))
            {
                if (neo[j].scripture == "0"|| "1" || "2" || "3" || "4" || "5"|| "6" || "7" || "8" || "9" )
                    { neo[j].R++; }
            }
        }
    }
    
    for (int i = 0; i < x; i++)
    {
        printf("L ke %d: %d\n", i, neo[i].L);
        printf("R ke %d: %d\n", i, neo[i].R);
    }


    return 0;
}
