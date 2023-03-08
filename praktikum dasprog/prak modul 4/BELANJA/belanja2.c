#include <stdio.h>
#include <stdio.h>

struct urut
{
    char merk [8];
    int ukuran;
    int keindahan;
    int kualitas;
};


int main () {

    int x;
    scanf("%d", &x);
    
    struct urut neo[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%s", neo[i].nama);
        scanf("%d", neo[i].ukuran);
        scanf("%d", neo[i].keindahan);
        scanf("%d", neo[i].kualitas);
    }

    int benar, temp;
    for(int i = 0; i < x; i++){ 
		for(int j = 0; j < x - 1; j++){ 
			benar = 0;
			
            // ngecek kualitas +1 dengan 1
			if(arr[j+1].kualitas > neo[j].kualitas){
				benar = 1;				
			}
			
            // kalau yg pertama ga urut dan kualitas +1 sama dengan 1
			if(benar == 0 && arr[j+1].kualitas == neo[j].kualitas){
				if(arr[j+1].keindahan > arr[j].keindahan){ // dan keindahan lebih gede
					benar = 1;
				}
			}
			
            // kalau kualitas sama dan keindahan sama
			if(benar == 0 && (arr[j+1].kualitas == arr[j].kualitas) && (arr[j+1].keindahan == arr[j].keindahan)){
				if(arr[j+1].ukuran > arr[j].ukuran){ // dan ukuran lebih gede
					benar = 1;
				}
			}
			
            // kualitas sama, keindahan sama, ukuran sama
			if(benar == 0 && (arr[j+1].kualitas == arr[j].kualitas) && (arr[j+1].keindahan == arr[j].keindahan) && (arr[j+1].ukuran == arr[j].ukuran)){
				if(strcmp(arr[j+1].merk, arr[j].merk) > 0){ // dan 
					benar = 1;
				}
			}
			
			if(benar == 1){
				temp = arr[j+1]; // masukin j+1 ke temp
				arr[j+1] = arr[j]; // masukin j ke j+1
				arr[j] = temp; // masukin temp yg isinya j+1 ke j
			}
		}
	}
    
    for(int i = 0; i < x; i++)
    {
		printf("%s %d %d %d\n", arr[i].merk, arr[i].ukuran, arr[i].keindahan, arr[i].kualitas);
    }
    
    return 0;
}