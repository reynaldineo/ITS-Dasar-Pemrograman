// Online C compiler to run C program online
#include <stdio.h>

//taruh fungsi di sini
float luasSegitiga (float a, float b) {
    float hasil;
    hasil = a * b / 2;
    return hasil;
}

float luasLingkaran (float a) {
    float hasil;
    hasil = 3,14 * a * a;
    return hasil;
}

float luasRectangle (float a, float b) {
    float hasil;
    hasil = a * b;
    return hasil;
}

int main (){
    float a, b;
    scanf("%f %f", &a, &b);
    
    //buatlah fungsi menghitung luas persegi panjang, lingkaran, segitiga.
    float L_rectangle, L_sphere, L_triangle;
    L_rectangle = luasRectangle(a,b); //a= panjang, b=lebar
    L_sphere = luasLingkaran(a); //a = jari2
    L_triangle = luasSegitiga(a,b); //a= alas, b = tinggi

    printf("rec %f\n", L_rectangle);
    printf("sphere %f\n", L_sphere);
    printf("triangle %f\n", L_triangle);
    return 0;
}
