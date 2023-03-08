#include <stdio.h>
#include <string.h>
int main(){
  char string[1000] ;
  char substr[1000] ;

  int K,C,i=0,j ;

  int ansistr;
  char temp ;

  scanf("%s",string) ; // M pesan
  scanf("%s",substr) ; // W kata yg di hilangkan

  int str_lenght = strlen(string) ; // ngambil panjang string
  int substr_lenght = strlen(substr) ; // ngambil panjang string
  
  scanf("%d",&K) ;
  scanf("%d",&C) ;

  while(i < str_lenght) // 0 < panjang pesan
  {
    if(strstr(&string[i],substr) == &string[i]) 
    {
      str_lenght -=substr_lenght ;
      
      for (j =i ; j<str_lenght;j++) 
      {
        string[j] = string[j+substr_lenght] ;
      }
    }
    else i++ ;
  }
  string[i] = '\0' ;
  int sem = 0 ;
  for(i=0;i<strlen(string);i++){
    if((string[i]>='A' && string[i] <= 'Z') || (string[i] >='a' && string[i] <= 'z'))
    {
    if(i%2!=0)
    {
     ansistr = (K+sem)%52 ;
     temp = string[i] ;
     string[i] -= ansistr ;
     if(temp > 96 && temp - ansistr <= 96 ){
      string[i] -=6 ;
     }
     if(string[i]< 39 )
     {
      string[i]+=58 ;
      string[i] -=6 ;
     }
     else if(string[i]>=39 && string[i] < 'A'){
      string[i] += 58 ;
     }
    }
    }
    sem +=C;
  }
  printf("prakDasprog{%s}",string) ;
  return 0 ;
}