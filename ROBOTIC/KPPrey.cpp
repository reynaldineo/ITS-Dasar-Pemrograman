// NAMA       :Reynaldi Neo Ramadhani
// NRP        :5025221265
// Jurusan    :Teknik Informatika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int mencari_V0(int x)
{
    int V0;
    if (x >= 1 && x<=10) V0 = x - 1;
    else if (x >= 11 && x<=20) V0 = x - 3;
    else if (x >= 21 && x<=30) V0 = x - 5;

    return V0;
}

int jaraktotal(int x,int y)
{
    int pj;
    pj = (pow(x,2)*sin(2*y*3.14159/180))/10;

    return pj;
}

double speed_dgn_loss(int x, int y)
{
    double v0loss;
    double Vtam;
    if (y >= 1 && y<=10) Vtam = 1;
    else if (y >= 11 && y<=20) Vtam = 3;
    else if (y >= 21 && y<=30) Vtam = 5;
    v0loss = sqrt((x * 10)/sin(2*SUDUT*3.14159/180)) + Vtam;

    return v0loss;
}

int main() {
    int Vt, nilai_V0, jarak;
    double nilaivt;


      std::cin >> Vt;
    nilai_V0 = mencari_V0(Vt);
    jarak = jaraktotal(nilai_V0,SUDUT);
    nilaivt = speed_dgn_loss(jarak, Vt);

      std::cout << jarak << " " << nilaivt<< std::endl;
    return 0;
}
