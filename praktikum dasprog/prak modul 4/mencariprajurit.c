#include<stdio.h>
#include<string.h>

struct Prajurit{
  char nama[20];
  char peranan[20];
  int stamina;
};

int main(){
  int n;
  char nam4[20], p3ranan[20];
  scanf("%d", &n);

  struct Prajurit arr[n];

  for(int i=0; i<n; i++){
    scanf("%s", arr[i].nama);
    scanf("%s", arr[i].peranan);
    scanf("%d", &arr[i].stamina);
  }

  scanf("%s", nam4);
  scanf("%s", p3ranan);

  for(int i=0; i<=n; i++){
    if(i==n) printf("Prajurit %s sebagai %s tidak terdapat pada basis data!", nam4, p3ranan);
    else if(strcmp(nam4, arr[i].nama)==0){
      if(strcmp(p3ranan, arr[i].peranan)==0){
        if(arr[i].stamina==0) {
          printf("Yah, prajurit %s sudah tumbang sebagai %s :(", nam4, p3ranan);
          break;
        }
        else {
          printf("Prajurit %s masih berjuang sebagai %s dengan %d stamina!", nam4, p3ranan, arr[i].stamina);
          break;
        }
      }
    }
  }
}