// C program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <stdio.h>

int cekPrima(int x) {

    // isi kodenya angka brp aja
	int arr[100000];
	for (int j=0; j<x; j++) {
		scanf("%d", &arr[j]);
	}

    int primes[x+1];
    int i,j;
    //populating array with naturals numbers
    for(i = 2; i<=x; i++) 
        primes[i] = i;
    
    i = 2;
    while ((i*i) <= x){
        if (primes[i] != 0){
            for(j=2; j<x; j++){
                if (primes[i]*j > x)
                    break;
                else
                    // Instead of deleteing , making elemnets 0
                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }

    int cek = 0;
    for(i = 2; i<=x; i++)
    {
        //If number is not 0 then it is prime
        if (primes[i]!=0){
            for (int a = 0; a < x; a++) {
                if(primes[i] == arr[a]) printf("%d",primes[i]);
            
            cek++;  } 
        } 
        // else if (primes[i]==0) {
        //     printf("Unable to send ");
        //     break;
        // }    
    }

    if (cek==0) 
        printf("Unable to send Fever Slot Buckle.");
            
    
    printf("\n");
   // if (cek!=0) printf("Unable to send Fever Slot Buckle.");
}

// Driver Code
int main()
{
    int n;
    scanf("%d", &n);

	for (int i=0; i<n; i++) {
		// jumlah kode yg mau di periksa
		int x;
		scanf("%d", &x);

        cekPrima(x);
            
    }


	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
