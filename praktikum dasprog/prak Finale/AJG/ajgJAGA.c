// C program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool prima[100001];
void cekPrima(int n)
{
    memset(prima, false, sizeof(prima));

    prima[1]=true;
    for (int p = 2; p * p <= n; p++) {
        if (prima[p] == false) {
            for (int i = p * p; i <= n; i += p)
                prima[i] = true;
        }
    }

}

// Driver Code
int main()
{
    int n;
    int arr[100001];
    cekPrima(100001);
    scanf("%d", &n);

	
    
	
	for (int i=0; i<n; i++) {
		// jumlah kode yg mau di periksa
		int x;
		scanf("%d", &x);
		// isi kodenya angka brp aja
		
		for (int j=0; j<x; j++) {
			scanf("%d", &arr[j]);
		}

        int cek = 0;
        
		for (int k=0; k<x; k++) {
			if (prima[arr[k]==false]) {
				printf("%d", arr[k]);
				cek++;
			}
		}
		if (cek==0) printf("Unable to send Fever Slot Buckle.\n");
		else printf("\n");
	}


	return 0;
}
