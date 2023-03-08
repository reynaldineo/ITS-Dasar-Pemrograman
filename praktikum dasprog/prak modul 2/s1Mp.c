#include <stdio.h>
#include <string.h>
int main()
{
	char M[1005], W[25];
	scanf("%s%s", &M, &W);
	// ambil panjang m dan w masukin ke L dan P
	int L = strlen(M), P = strlen(W);
	int e = 0, i = 0;
	int j, K, C;
	scanf("%d%d", &K, &C);
	printf("prakDasprog{");

	// isi yg di enskripsi
	while(i<L) // 0 < panjang M (peasan)
	{
		int b = 0;
		for(j=0; j<P; j++) // 0<kata yg mau di hapus
		{
			if(M[i+j]!=W[j]) // if isi pesan != kata 
			{
				b++; 
				break;
			}
		}

		if(b==0)
			i = i + P; // 0 + panjang w
		else
		{
			char chr;
			// cek kalau ganjil 
			if(e%2==1 && (M[i]>='A' && M[i]<='Z' || M[i]>='a' && M[i]<='z'))
			{
				int krg = (K + e * C) % 26;
				chr = M[i] - krg;
				if(M[i]>='A' && M[i]<='Z' && chr<'A')
					chr = chr + 58;
				else if(M[i]>='a' && M[i]<='z' && chr<'a')
					chr = chr - 6;
			}
			else
				chr = M[i];
			printf("%c", chr);
			e++, i++;
		}
	}
	printf("}");
}
