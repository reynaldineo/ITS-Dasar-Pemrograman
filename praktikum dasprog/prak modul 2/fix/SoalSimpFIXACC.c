#include <stdio.h>
#include <string.h>
int main()
{
	char pesan[1005], hilang[25];
	scanf("%s%s", &pesan, &hilang);
	// ambil panjang m dan w masukin ke L dan P
	int pesankah = strlen(pesan), hilangkah = strlen(hilang);
	scanf("%d%d", &pesankah, &hilangkah);
	int j, key, tmbhKey;
	// stirng ke brp yg ga di hapus
	int e = 0;
	int i = 0;
	printf("prakDasprog{");// karena di enskripsi 1 per 1, jadi print ini dulu

	// isi yg di enskripsi
	while(i<pesankah) // 0 < panjang M (peasan), tadi kan udh ngambil panjang nya brp
	{
		// sama kayak huruf yg di hilangin apa engga
		int b = 0;
		for(j=0; j<hilangkah; j++) // 0<kata yg mau di hapus
		{
			// isi input yg di cek != 
			if(pesan[i+j]!=hilang[j]) // if isi pesan != kata
			{
				b++;
				break;
			}
		}

		if(b==0)
			i = i + hilangkah; // 0 + panjang w

		else
		{
			char kata;
			// cek kalau ganjil
			if(e%2==1 && (pesan[i]>='A' && pesan[i]<='Z' || pesan[i]>='a' && pesan[i]<='z'))
			{
				int uhuy = (key + e * tmbhKey) % 26;
				kata = pesan[i] - uhuy;
				if(pesan[i]>='A' && pesan[i]<='Z' && kata<'A')
					kata = kata + 58;
				else if(pesan[i]>='a' && pesan[i]<='z' && kata<'a')
					kata = kata - 6;
			}
			else
				kata = pesan[i];
			printf("%c", kata);
			e++, i++;
		}
	}
	printf("}");
}
