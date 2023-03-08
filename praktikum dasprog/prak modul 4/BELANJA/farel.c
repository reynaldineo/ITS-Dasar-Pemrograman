#include<stdio.h>
#include<string.h>

struct Data{
  char merk[20];
  int kualitas, keindahan, ukuran;
};

int main(){
  int m, x=0;
  scanf("%d", &m);

  struct Data arr[m], tmp;

  for(int i=0; i<m; i++){
    scanf("%s", arr[i].merk);
    scanf("%d", &arr[i].ukuran);
    scanf("%d", &arr[i].keindahan);
    scanf("%d", &arr[i].kualitas);
  }

  for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
      if(arr[i].kualitas>arr[j].kualitas) x=1;
      else if(x==0 && arr[i].kualitas==arr[j].kualitas){
        if(x==0 && arr[i].keindahan>arr[j].keindahan) x=1;
        else if(x==0 && arr[i].keindahan==arr[j].keindahan){
          if(x==0 && arr[i].ukuran>arr[j].ukuran) x=1;
          else if(x==0 && arr[i].ukuran==arr[j].ukuran){
            if(x==0 && strcmp(arr[i].merk, arr[j].merk)>0) x=1;
          }
        }
      }
      if(x==1){
        tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
      }
      x=0;
    }
  }

  for(int i=0; i<m; i++){
    printf("%s ", arr[i].merk);
    printf("%d ", arr[i].ukuran);
    printf("%d ", arr[i].keindahan);
    printf("%d\n", arr[i].kualitas);
  }
}