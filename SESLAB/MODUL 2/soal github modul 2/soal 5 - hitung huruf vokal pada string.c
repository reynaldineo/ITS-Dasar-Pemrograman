#include <stdio.h>
#define MAX_STR 100

int main(){
	
	char input[MAX_STR];
	int i;
	//variabel untuk menghitung berapa kali huruf tersebut terdapat pada string
	int count_a = 0,
		count_i = 0,
		count_u = 0,
		count_e = 0,
		count_o = 0;
	
	gets(input);
	
	for(i=0; input[i]!='\0'; i++){
		if(input[i] == 'a' || input[i] == 'A')
			count_a++;
		else if(input[i] == 'i' || input[i] == 'I')
			count_i++;
		else if(input[i] == 'u' || input[i] == 'U')
			count_u++;
		else if(input[i] == 'e' || input[i] == 'E')
			count_e++;
		else if(input[i] == 'o' || input[i] == 'O')
			count_o++;
	}
	
	printf("A/a : %d\n", count_a);
	printf("I/i : %d\n", count_i);
	printf("U/u : %d\n", count_u);
	printf("E/e : %d\n", count_e);
	printf("O/o : %d\n", count_o);
	
	return 0;
}
