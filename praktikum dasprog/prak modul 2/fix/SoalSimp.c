#include <stdio.h>
#include <string.h>
int main()
{
	char pesan[1005], hilang[25];
	scanf("%s%s", &pesan, &hilang);

	int pesan2 = strlen(pesan), hilang2 = strlen(hilang);
	int y = 0, x = 0;
	int z, key, tmbhKey;
	scanf("%d%d", &key, &tmbhKey);
	printf("prakDasprog{");

	while(z<pesan2)
	{
		int b = 0;
		for(z=0; z<hilang2; z++)
		{
			if(pesan[x+z]!=hilang[z])
			{
				b++;
				break;
			}
		}

		if(b==0)
			x = x + hilang2;

		else
		{
			char kata;

			if(y%2==1 && (pesan[x]>='A' && pesan[x]<='Z' || pesan[x]>='a' && pesan[x]<='z'))
			{
				int uhuy = (key + y * tmbhKey) % 26;
				kata = pesan[x] - uhuy;
				if(pesan[x]>='A' && pesan[x]<='Z' && kata<'A')
					kata = kata + 58;
				else if(pesan[x]>='a' && pesan[x]<='z' && kata<'a')
					kata = kata - 6;
			}
			else
				kata = pesan[x];
			printf("%c", kata);
			y++, x++;
		}
	}
	printf("}");
}
