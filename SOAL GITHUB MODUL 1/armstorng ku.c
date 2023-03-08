#include <stdio.h>
    
    int main (){

        int x;

        scanf("%d", &x);

        int ratusan, puluhan, satuan;
        int armStrong;

        
        if (x > 0 && x < 10)
        {
            printf("merupakan bilangan armstrong\n");
        }
        
        else if (x>=10 && x<=99)
        {
            // nentuin nilai tiap tiap angka
            int puluhan = x/10;
            int satuan = x%10;

            if (satuan*satuan + puluhan*puluhan == x)
            {
                printf("merupakan armstrong");
            }
            else
            {
                printf("bukan armstrong");
            } 
        }
        
        else if (x>= 100 && x<=999)
        {
            int ratusan = x/100;
            int puluhan = (x/10)%10;
            int satuan = x%10;

            if (satuan*satuan*satuan + puluhan*puluhan*puluhan + ratusan*ratusan*ratusan == x)
            {
                printf("merupakan armstrong");
            }
            else
            {
                printf("bukan armstrong");
            }
            
        }
        else
        {
            printf("salah data");
        }
        
        
    return 0;
    }