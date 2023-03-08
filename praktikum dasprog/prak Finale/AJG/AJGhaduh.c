// C program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool prime[10001];
void cekPrima(int n)
{

	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	// bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	
	for (int p = 2; p * p <= n; p++) {
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true) {
			// Update all multiples of p greater than or
			// equal to the square of it numbers which are
			// multiple of p and are less than p^2 are
			// already been marked.
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	// for (int p = 2; p <= n; p++) {
	// 	if (prime[p]) printf("%d ",p);
			
	// }
}

// Driver Code
int main()
{
    int n;
	// cekPrima(10001);
    scanf("%d", &n);
	
	//bool prime[n + 1];
	
	for (int i=0; i<n; i++) {
		// jumlah kode yg mau di periksa
		int x;
		scanf("%d", &x);

		cekPrima(x-1);
		int arr[1000];

		// isi kodenya angka brp aja
		int cek = 0;
		for (int j=0; j<x; j++) {
			scanf("%d", &arr[j]);
		}

		for (int k=0; k<x; k++) {
			if (prime[arr[k]==true]) {
				printf("%d", arr[k]);
				cek++;
			}
		}
		if (cek==0) printf("Unable to send Fever Slot Buckle.\n");
		else printf("\n");
	}


	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
