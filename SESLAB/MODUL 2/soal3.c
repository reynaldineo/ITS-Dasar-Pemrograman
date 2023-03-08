#include <stdio.h>

    int main () {

        int x;
        scanf("%d", &x);

        int p =10;
        for (int i = 2; i <= p; i++)
        {
            if(i== 2 || i== 3 || i==5 || i==7) {printf("* ");}
            else printf("%d ", i);
            p--;
        }

        for (int i = 10; i <= x; i++)
        {

            if (i%2 == 0 || i%3 == 0 || i%5 == 0 || i%7 == 0) // cek bilangan prima
            {
                printf("%d ", i);
            }

            else //if (i%2 == 0 || i%3 ==0 || i%5 == 0 || i%7 == 0)
            {
                printf("* ");
            }
        }




        return 0;
    }
