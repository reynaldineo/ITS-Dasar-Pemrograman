// NAMA       :Aditya Rizki Muhammad
// NRP        :5025221272
// Jurusan    :Teknik Informatika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int mencari_V0(int x)
{
    int V0;
    
	switch (x)
	{
	case 1 ... 10:
		V0 = x - 1;
		break;
		
	case 11 ... 20:	
		V0 = x - 3;
		break;

	case 21 ... 30:
		V0 = x - 5;
		
	default:
		break;
	}
    
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
    
    switch(y){
    	case 1 ... 10:
    		Vtam = 1;
    		break;
    		
    	case 11 ... 20:
    		Vtam = 3;
    		break;
    		
    	case 21 ... 30:
    		Vtam = 5;
    		break;
    		
	}

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