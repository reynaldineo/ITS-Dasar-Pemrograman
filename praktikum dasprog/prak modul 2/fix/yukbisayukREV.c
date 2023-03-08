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

	while(x<pesan2)
	{
		int a = 0;
		for(z=0; z<hilang2; z++)
		{
			if(pesan[x+z]!=hilang[z])
			{
				a++;
				break;
			}
		}

		if(a==0)
			x = x + hilang2;
		else
		{
			char chr;
			if(y%2==1 && (pesan[x]>='A' && pesan[x]<='Z' || pesan[x]>='a' && pesan[x]<='z'))
			{
				int krg = (key + y * tmbhKey) % 26;
				chr = pesan[x] - krg;
				if(pesan[x]>='A' && pesan[x]<='Z' && chr<'A')
					chr = chr + 58;
				else if(pesan[x]>='a' && pesan[x]<='z' && chr<'a')
					chr = chr - 6;
			}
			else
				chr = pesan[x];
			printf("%c", chr);
			y++, x++;
		}
	}
	printf("}");
}
