#include <stdio.h>

int main(){
	
	int input, i;
	scanf("%d", &input);
	
	for(i=1; i<=input; i++){
		
		if(i%2 == 0) printf("*");
		else printf("%d", i);
		printf(" ");
	}
	
	return 0;
}
