#include <stdio.h>
#include <math.h>

int main(){
	
	int input;
	int i, j;
	int prima;
	
	scanf("%d", &input);
	
	for(i=2; i<=input; i++){
			
		//apakah prima
		prima = 1;
		for(j=2; j<=sqrt(i); j++ ){
			
			//jika suatu angka habis membagi bilangan tersebut (i), maka tidak prima
			if(i%j == 0){
				prima = 0;
				break;
			}
		}
		
		if(prima == 0) printf("%d", i); //bukan prima
		else printf("*"); //prima
		
		if(i == input) break; //apabila udah sampai angka terakhir, maka setelahnya tidak mencetak spasi (" ")
		printf(" ");
	}
	return 0;
}
