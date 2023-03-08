#include <stdio.h>
#include <string.h>

struct data
{
    char merk [20];
    int ukuran;
    int keindahan;
    int kualitas;
};


int main () {

    int x;
    scanf("%d", &x);
    
    struct data neo[x], temp;

    for (int i = 0; i < x; i++)
    {
        scanf("%s", neo[i].merk);
        scanf("%d", &neo[i].ukuran);
        scanf("%d", &neo[i].keindahan);
        scanf("%d", &neo[i].kualitas);
    }

    int cek;
    for(int i=0; i<x; i++)
	{
		for(int j=0; j<x; j++)
		{
			cek = 0;
			if(neo[i].kualitas > neo[j].kualitas) cek = 1;

			else if(cek == 0 && neo[i].kualitas == neo[j].kualitas) {
				if(cek == 0 && neo[i].keindahan > neo[j].keindahan) cek = 1;

				else if(cek == 0 && neo[i].keindahan == neo[j].keindahan) {
					if(cek == 0 && neo[i].ukuran > neo[j].ukuran) cek = 1;

					else if(cek == 0 && neo[i].ukuran == neo[j].ukuran) {
						if(cek == 0 && strcmp(neo[i].merk, neo[j].merk) > 0) cek = 1;
					}
				}
			}

			if(cek==1)
			{
				temp = neo[i];
				neo[i] = neo[j];
				neo[j] = temp;
			}
		}
	}
	
    
    for(int i = 0; i < x; i++)
    {
		printf("%s %d %d %d\n", neo[i].merk, neo[i].ukuran, neo[i].keindahan, neo[i].kualitas);
    }
    
    return 0;
}