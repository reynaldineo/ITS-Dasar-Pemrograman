#include <stdio.h>
#include <string.h>

int main () {
  
	char a[5] = "Halo";
	char b[2];
	
	// Copy string a ke string b
	strcpy(b, a);
	
	printf("%s\n", b);
	
	return 0;

}