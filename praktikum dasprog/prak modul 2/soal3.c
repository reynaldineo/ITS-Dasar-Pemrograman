#include<stdio.h>
#include<string.h>

int main (){
    char a[1000], b[20];
    int aw, tam, tot, jr;
    int i, j, k;
    

    gets(a);
    gets(b);
    scanf("%d %d", &aw, &tam);
    for( i = 0; a[i] != '\0'; i++){
            int temp = 0;

            int ab = 0;
            for ( j = 0; j < 2*strlen(b); j++){
                if (a[i + ab] == b[ab]) temp++;
                if (a[i + ab] != b[ab]) break;
                ab++;
                if (ab == (strlen(b)-1)) ab = 0;
            }
            if (temp == 2*strlen(b)){
                temp = strlen(b);
                for ( j = 0; j < strlen(b);  j++){
                    for ( k = i; a[k] != '\0'; ++k){
                        a[k] = a[k+1];

                
                    }
                }
                i--;
            }
            else if (temp >= strlen(b)){
                for ( j = 0; j < strlen(b);  j++){
                    for ( k = i; a[k] != '\0'; ++k){
                        a[k] = a[k+1];

                
                    }
                }
            }
    }
    
    for ( i = 0; a[i] != '\0'; i++ ){
        tot = aw + i*tam;
        if (i %2 == 1 && ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))){
            if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')){
                if (a[i] >= 'A' && a[i] <= 'Z') jr = a[i] - 64;
                else if (a[i] >= 'a' && a[i] <= 'z') jr = a[i] - 96; 
                a[i] -= tot;
                if((jr - tot) < 1){
                    if (a[i] < 65) a[i] += 58;
                    else if(a[i] <97) {a[i] -= 6;
                    }
                }
                
                
                
            }
        }
    }
    printf("prakDasprog{%s}", a);    
    return 0;
}
