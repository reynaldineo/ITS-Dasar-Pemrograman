// C program to illustrate situation
// where flush(stdin) is required only
// in certain compilers.
#include <stdio.h>
#include<stdlib.h>
int main()
{
	char str[20];
	int i;
	for (i=0; i<2; i++)
	{
		scanf("%[^\n]s", str);
		printf("%s dan %d\n", str, i);
		fflush(stdin);
	}
	return 0;
}
