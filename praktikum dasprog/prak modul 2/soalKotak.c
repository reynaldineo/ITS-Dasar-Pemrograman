#include <stdio.h>

    int main () {

    // buat N x M
    int x,y;
    scanf("%d", &x); //baris ke bawh
    scanf("%d", &y); // baris ke samping

    int arr[y];


    for (int i = 0; i < 1 ; i++)
    {
        for (int i = 0; i < y ; i++)
        {
        printf("#");
        }
        printf("\n");
    }

    for (int i = 1; i < x-1; i++) //untuk ke bawah
    {

        for (int j = 1; j < 2; j++)
        {
            printf("#");
        }
        
        for (int j = 2; j < y; j++) // untuk ke samping
        {
            //if (j==1) { printf("#");}

            printf("-");

            // if (j==y) { printf("#");}
        }

        for (int j = y; j < y+1; j++)
        {
            printf("#");
        }

        printf("\n");

    }

    for (int i = x; i <= x ; i++)
        {
            for (int i = 0; i < y ; i++)
            {
            printf("#");
            }
            //printf("\n");
        }



        return 0;
    }
