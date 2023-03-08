#include<stdio.h>
#include<string.h>
#include<math.h>

struct Baris{
  int kodeangka;
  char kode;
};

int main(){
  int n, sama=0, jumlah=0;
  char bariskode[301];
  scanf("%d", &n);
  struct Baris arr[n];
  
  for(int i=0; i<n; i++){
    scanf("%s", bariskode);
    scanf(" %c", &arr[i].kode);
    arr[i].kodeangka=0;

    int panjang=strlen(bariskode);
    for(int j=0; j<panjang; j++){
      if(bariskode[j]>='0' && bariskode[j]<='9')
       arr[i].kodeangka=(arr[i].kodeangka*10) + (bariskode[j]-48);
    }
  }

  for(int i=0; i<n; i++){
    for(int j=1; j<n; j++){
      if(arr[i].kodeangka==arr[j].kodeangka && arr[i].kode!=arr[j].kode && arr[i].kode!='a'&&arr[j].kode!='a'){
        arr[i].kode='a';
        arr[j].kode='a';
        jumlah+=arr[i].kodeangka;
        sama++;
      }
    }
  }
  double akar1=sqrt(jumlah);
  int akar2=sqrt(jumlah);

  if(sama==0) printf("Tidaaakkkkkkkkk\n");
  else if(akar1==akar2){
    printf("%d\n", sama);
    printf("Piertotum Locomotor\n");
  }
  else if(akar1!=akar2) printf("%d\n", sama);
}