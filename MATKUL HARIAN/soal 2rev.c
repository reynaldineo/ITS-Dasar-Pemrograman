#include<stdio.h>
int main() {
  int num ,i;
  scanf("%d",&num) ;
  for(i = num ; i >= 1;i--) {
    if(num%i==0) {
      printf("%d\n",i) ;
    }
  }
  return 0 ;
}
