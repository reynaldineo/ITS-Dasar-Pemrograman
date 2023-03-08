#include <stdio.h>

// return 2 * x// itu artinya 2 *x

// return = artinya balikin nilai ke mana dia di panggil
// cth : return 2, maka dia balikin nilai fungsi itu 2
// jalannya dri atas ke bawah lanjut ke atas lagi


int faktorial (int x) {
    if (x==0) return 1;
    return x * faktorial(x-1);
    // int x = x * (x-1);

}

int main (){
    // int hasil = faktorial(3)
    printf("%d", faktorial(3));
    return 0;
}