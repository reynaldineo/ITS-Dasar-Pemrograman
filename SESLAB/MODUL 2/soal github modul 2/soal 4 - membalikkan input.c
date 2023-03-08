#include <stdio.h>
#define MAX_ARR 30

int main(){
	
	int input[MAX_ARR];
	int n;
	int i;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &input[i]);
	}
	
	//di sini i = n.
	//i perlu dikurang 1 agar indexnya sesuai, tak berlebih
	for(i--; i>=0; i--){
		printf("%d\n", input[i]);
	}
	
	return 0;
}
