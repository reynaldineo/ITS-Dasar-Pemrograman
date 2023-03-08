#include <stdio.h>
#define MAX_STR 50

int main(){
	
	char input[MAX_STR];
	int kapital = 0;
	int i;
	
	gets(input);
	
	for(i=0; input[i]!='\0'; i++){
		
		if(input[i] == '_'){ // untuk cek udh _ belum
			kapital = 1;
			continue;
		}
		
		//kode ascii 'Z' = 90.
		if(input[i] < 91){ //jika huruf kapital
			input[i] += 32; //maka diubah ke huruf kecil
			//kode asci 'a'=65, 'A'=97, selisihnya=32
		}
		
		//huruf setelah '_' diubah ke kapital
		if(kapital == 1){
			input[i] -= 32; //
			kapital = 0;
		}
	}
	
	for(i=0; input[i] != '\0'; i++){
		if(input[i] == '_') continue;
		printf("%c", input[i]);
	}
	
	return 0;
}
