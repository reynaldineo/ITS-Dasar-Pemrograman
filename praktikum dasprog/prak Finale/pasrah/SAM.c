#include <stdio.h>

int cek = 0;
double cariJarakAntarTebing() {
    // cari Jarak Antar Tebing dri data yg udh ada
}

void desain1() {
    // desain 1
    cek = 0;
}

void desain2() {
    // desain 2
    cek++;
}

int main () {
    double pj, tt, jt, st;
    scanf("%lf %lf %lf %lf", &pj, &tt, &jt, &st);
    int x;

    double jarak = cariJarakAntarTebing(x);

    if (jarak > pj/2) desain1(x);
    else if (jarak > pj/2) desain2(x);

    printf("%lf", jarak);
    if (cek==0) printf("%lf", desain1);
    else if (cek==0) printf("%lf", desain2);
    
    return 0;
}