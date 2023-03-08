#include <stdio.h>
//#define DATANG 0

int main()
{
    int hadir;

    scanf("%d", &hadir);
    if (hadir == 1) // Jika orang tersebut hadir
    {
        printf("V\n");
    } else {
        printf("X\n");
    }
    return 0;
}