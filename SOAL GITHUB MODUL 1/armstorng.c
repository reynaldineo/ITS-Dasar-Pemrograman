#include <stdio.h>

    int pangkat (int, int);
    int main(){

        // int input;

        // printf("masukan angka");
        // scanf("%d", &input);


    int angka, total = 0, temp, digit, jmldigit = 0;
    printf("Masukkan angka :\n");
    scanf("%d",&angka);

    temp = angka;
    while(temp != 0){
        jmldigit++; //menghitung jumlah digit
        temp=temp/10;
    }

    temp = angka;
    while(temp !=0){
        digit = temp%10; // Menjumlahkan pangkat masing masing digit
        total=total+pangkat(digit,jmldigit);
        temp = temp/10;
    }

    if (angka == total) printf("%d adalah angka armstrong.\n", angka);
    else printf("%d bukan angka armstrong.\n", angka);

    return 0;
}

int pangkat(int angka, int pangkat){
    int total=1; //Pangkatkan masing masing digit
    for(int i = 1;i<=pangkat;i++){
        total = total * angka;
    }
    return total;
}  



