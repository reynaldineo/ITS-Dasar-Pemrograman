#include <stdio.h>
#include <string.h>

struct base
{
    char namaTempat[101];
    char cekTempat[102];
    int latittude;
    int longitude;
    // int cek, aman;
};

int cekPrima (int n){
    int m = n - 1;
	int factm = 1;
// find factorial of n-1
	for (int i = 1; i <= m; i++) {
		factm *= i;
	}

// add 1 to (n-1)!
	int factn = factm + 1;

     return factn;

	// if (factn % n == 0) {
	// 	// if remainder is 0
	// 	// printf(" %d is prime number",n);
    //     return n;
	// }
	// else {
	// 	//  printf("%d is not prime number",n);
    //     return n;
	// }
}


int main () {
    int a, b,n,e;
    scanf("%d %d", &a, &b);

    struct base data[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%s %d%c %d%c", data[i].namaTempat, &data[i].latittude,&n, &data[i].longitude,&e);
    }


    for (int i = 0; i < b; i++) {
        // char cekTempat[101];
        // scanf("%s", cekTempat);
        scanf("%s", data[i].cekTempat);

        for (int j = 0; j < a; i++) {
            if (strcmp(data[i].cekTempat, data[j].namaTempat) == 0 )
            {
                // fungsi cek prima
                int prima1 = cekPrima(data[j].latittude);
                int prima2 = cekPrima(data[j].longitude);

                // printf("%d %d", prima1, prima2);

                if (prima1%data[j].latittude == 0 && prima2 % data[j].longitude == 0) {
                    printf("%s aman! Bangunlah Kesatria!\n", data[i].namaTempat);
                    //break;
                }
                else  {
                    printf("%s tidak aman! Ini pasti ulah Gorgom!\n", data[i].namaTempat);
                    //break;
                }
            }

            else if (strcmp(data[i].cekTempat, data[j].namaTempat) != 0)
            {
                printf("Tempat apa itu? Kotaro tidak tahu!\n");
                break;
            }
            
        }
        
    }
    
    return 0;
}