#include <stdio.h>

struct base
{
	char namaMenu[100];
	int harga, stok; 
};

int main () {

    struct base data[10000];

    while (1) {
		char perintah[50];
		scanf("%s", perintah);

		if(strcmp("ADD", perintah) == 0) {
			// masukin menu
        }
        else if(strcmp("INFO", perintah) == 0){
            // keluarin info
        }
        else if(strcmp("REMOVE", perintah) == 0){
            // buang menu
        }
        else if(strcmp("ORDER", perintah) == 0){
            // pesan
        }
        else if(strcmp("DISC", perintah) == 0){
            // diskon
        }
        else if(strcmp("CLOSE", perintah) == 0){
            break;
        }
        printf("SEMUANYA");
    }
    return 0;
}