#include<stdio.h>
int jumlahInput, perluBrp, dangoHarus;
int dango[100], tepat;

void periksa (int ulangKe, int total, int ke){
    if (ulangKe < jumlahInput && total < dangoHarus){
        periksa(ulangKe+1, total, ke);
        periksa(ulangKe+1, total+dango[ulangKe+1], ke+1);
    }
    else if (ulangKe <=jumlahInput && total == dangoHarus && ke == perluBrp){
        tepat = 100;
    }
}


int main (){
    scanf("%d %d", &jumlahInput, &perluBrp);
    
    for (int i = 1; i <= jumlahInput ; i++){
        scanf("%d", &dango[i]);
    }
    scanf("%d", &dangoHarus);

	periksa(0, 0, 0);
    if (tepat == 100 ) printf("Kosimp boleh pulang");
    else printf("Kosimp belum boleh pulang:(");
}