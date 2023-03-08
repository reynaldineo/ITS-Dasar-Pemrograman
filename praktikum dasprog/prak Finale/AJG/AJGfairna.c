#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool prima[100001];
void cek(int n)
{
    memset(prima, false, sizeof(prima));

    prima[1]=true;
    for (int p = 2; p * p <= n; p++) {
        if (prima[p] == false) {
            for (int i = p * p; i <= n; i += p)
                prima[i] = true;
        }
    }

}

int main(){
    int q,n;
    int kode[100001];
    cek(100001);
    scanf("%d",&q);

   

    // while(q--)
    for(int w=0; w<q; w++)
    {
        scanf("%d",&n);
        int ceky=0;
        for(int i=0;i<n;i++){
            scanf("%d", &kode[i]);
        }

        for (int k=0; k<n; k++) {
			if(prima[kode[k]]== false){
                printf("%d ",kode[k]);
                ceky++;
            }
		}

        if(ceky == 0){
            printf("Unable to send Fever Slot Buckle.\n");
        }
        else{
            printf("\n");
    }
    }
    return 0;
}
