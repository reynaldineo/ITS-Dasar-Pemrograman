#include <stdio.h>
#include <string.h>

struct base
{
    char nama[50], namaTeman[50], nomorTelpon[50], nomorTelponTeman[50];
    int umur, umurTeman;
};

int main ()
{
    int n;
    scanf("%d", &n);

    struct base data[100];

    int arr[100];
	char kota [50][50];
    
    int i = 0, j = 0, k=0;
    for(int i=0; i<n; i++) {
        int x;
        scanf("%s %d", kota[i], &x);
        for(int j=0; j<x; j++) {
            scanf("%s %d %s", data[k].nama, &data[k].umur, data[k].nomorTelpon);
			k++;
        }
        arr[i] = k;
    }

	int jumlahTeman;
    scanf("%d", &jumlahTeman);

	char TemanA[100], TemanB[100];
    
    for (int i=0; i<jumlahTeman; i++) {
		scanf("%s%s", TemanA, TemanB);
        for (int j=0; j<k; j++) {
			if(strcmp(TemanA, data[j].nama) == 0) {
                for (int o=0; o<k; o++) {
					if(strcmp(TemanB, data[o].nama) == 0) {
						strcpy(data[j].namaTeman, data[o].nama);
						data[j].umurTeman = data[o].umur;
						strcpy(data[j].nomorTelponTeman, data[o].nomorTelpon);
						break;
					}	
				}
				break;
			}
		}
	}

    for (int i=0; i<n; i++) {
		printf("%s\n", kota[i]);
        for (j; j!=arr[i]; j++) {
			printf("Name: %s\n", data[j].nama);
			printf("Age: %d\n", data[j].umur);
			printf("Phone Number:%s\n", data[j].nomorTelpon);
			if(strlen(data[j].namaTeman) != 0) {
				printf("His/Her bestie is: %s\n", data[j].namaTeman);
				printf("His/Her contact info is as follows\n");
				printf("Name: %s\n", data[j].namaTeman);
				printf("Age: %d\n", data[j].umurTeman);
				printf("Phone Number:%s\n", data[j].nomorTelponTeman);	
			}
            else {
				printf("His/Her bestie is: No one\n");
			}
		}
		printf("\n");
	}
	return 0;
}