// C program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <stdio.h>

int cekPrima(int x) {

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

    for(i = 2; i<=x; i++)
    {
        //If number is not 0 then it is prime
        if (primes[i]!=0)
            // printf("%d\n",primes[i]);
            return primes[i];
    }
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
		// isi kodenya angka brp aja
		int arr[100000];
		for (int j=0; j<x; j++) {
			scanf("%d", &arr[j]);
		}



        // udh angka prima
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

        for(i = 0; i<x; i++)
        {
            //If number is not 0 then it is prime
            if (primes[i]!=0){
                if (primes[i]=arr[i]) printf("%d ",primes[i]);
            }
                
                
        }

            
        }


	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
