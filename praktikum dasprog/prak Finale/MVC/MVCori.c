#include <stdio.h>
#include <string.h>

int n,p,temp;
char num[100], h[100], cek[100];

int insertionsort(char *arr,int n)
{for(int i=1;i<n;i++)
    {temp=*(arr+i);
        int j=i-1;
        while(temp>*(arr+j)&&j>=0)
        {*(arr+(j+1))=*(arr+j);
         j--;
        }
        *(arr+(j+1))=temp;
    }
    return 0;
}

int main() {
    scanf("%s\n%d", num, &n);
    for (int i = 0; i < n; i++){
        if(cek[i] = '0'){
        h[i] = '0';}
    }

    p=strlen(num)-n+1;

    for (int i=0; i<p ; i++){
        for (int j = 0; j < n; j++){
            cek[j] = num[j + i];
        }
        insertionsort(cek,n);
        if (strcmp(cek,h) > 0){
        strcpy(h,cek);
        }
        else{}
    }
    
    for (int i = 0; i < n; i++){
        printf("%c",h[i]);
    }
 return 0;
}
