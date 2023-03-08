#include <stdio.h>

    int main() {

        char p, q;
        scanf("%c%c", &p, &q);
        
        if (p == 'I')
        {
            if (q == 'V') {printf("4");}
            else if (q == 'X') {printf("6");}
            else if (q == 'I') {printf("2");}
            else {printf("bilangan romawi tidak ada yang seperti ini :(");}  
        }
        
        else if (p == 'V')
        {
            if (q == 'I') {printf("6");}
            else {printf("bilangan romawi tidak ada yang seperti ini :(");} 
        }
        
        else if (p == 'X')
        {
            if (q == 'I') {printf("11");}
            else if (q == 'V') {printf("15");}
            else if (q == 'X') {printf("20");}
            else if (q == 'L') {printf("40");}
            else if (q == 'C') {printf("90");}
            else {printf("bilangan romawi tidak ada yang seperti ini :(");}  
        }

        else if (p == 'L')
        {
            if (q == 'I') {printf("51");}
            else if (q == 'V') {printf("55");}
            else if (q == 'X') {printf("60");}
            else {printf("bilangan romawi tidak ada yang seperti ini :(");}  
        }

        else if (p == 'C')
        {
            if (q == 'I') {printf("101");}
            else if (q == 'V') {printf("105");}
            else if (q == 'X') {printf("110");}
            else if (q == 'L') {printf("150");}
            else if (q == 'C') {printf("200");}
            else {printf("bilangan romawi tidak ada yang seperti ini :(");} 
        }
        
        else {printf("bilangan romawi tidak ada yang seperti ini :(");}
        
        return 0;
    }