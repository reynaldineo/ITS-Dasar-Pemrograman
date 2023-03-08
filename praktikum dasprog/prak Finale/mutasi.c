#include <stdio.h>
    #include <string.h>
    #include <stdbool.h>

    bool b[9];

    void permutation(int a,int cekke,int print[]){
        if(cekke <= a){
            for (int i = 1; i <= a; i++){
                if(b[i] == true){
                    b[i] = false;
                    print[cekke] = i;
                    if(cekke+1 == a){
                        for(int j = 0; j < a; j++){
                            printf("%d ", print[j]);
                        }
                        printf("\n");
                    }
                    permutation(a,cekke+1,print);
                    b[i] = true;
                    print[cekke] = 0;
                }
            }
        }
    }

    int main() {
        int a;
        scanf("%d", &a);
        int print[a];
        memset(b, true, a+1 );;
        permutation(a, 0, print);


        
        

    }