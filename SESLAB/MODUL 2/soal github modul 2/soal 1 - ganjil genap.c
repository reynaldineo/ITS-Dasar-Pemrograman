#include <stdio.h>


int main(){
	
	int input = 1;
	while(input != 0){
		scanf("%d", &input);
		
		if(input % 2 == 0) printf("Genap");
		else printf("Ganjil");
	}
	return 0;
}
