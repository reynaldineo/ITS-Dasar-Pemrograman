#include <stdio.h>
int main () {

    int a = 0;

    // inputan kata kata total
	char pesan[1000];
    // input kata yg mau di hilangin
    char hilang[20];
    printf("masukan kata ");
	scanf("%s", pesan);
    printf("masukan kata yg mau di hilangin ");
    scanf("%s", hilang);
    // copy panjang kata
	int pesan2 = strlen(pesan), hilang2 = strlen(hilang);
    // string ke brp yg ga di hapus

    int x = 0;

while(x<pesan2)
{
    for(int z=0; z<hilang2; z++)
		{
		    printf("pesan %c\n", pesan[x+z]);
		    printf("\thilang %c\n", hilang[z]);
            // ngecek ada yg sama apa ga
            // x+z, karena x itu kata yg dicek, z itu penambahan yg di cek
			if(pesan[x+z]!=hilang[z])
			{
                // tambah nilai
				a++;
				//printf("%d", a);
				break; // biar hemat memory, kalau udh ga sama langsung lanjut next step
		    }

        }

    // if (a==0)
    // {
    //     printf("%s\n", pesan);
    // }
    //printf("\na =%d\n ", a);
    if (a > 1)
    {
        printf("%s\n", pesan);
        break;
    }

    x++;
}


    return 0;
}
