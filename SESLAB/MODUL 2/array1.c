#include <stdio.h>

int main()
{
	

  int a[10]; //Deklarasi Array
  
  int b[5] = {1, 2, 3, 4, 5}; //Inisialisasi Array
  
  a[0] = 58;
  a[1] = 86;
  a[2] = 90;
  a[100] = 11;
  printf("%d %d %d\n", a[0], b[1], a[100]);
  
  return 0;

}
