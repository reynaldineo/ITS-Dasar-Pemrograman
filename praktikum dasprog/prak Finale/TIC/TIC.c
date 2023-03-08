#include <stdio.h>
#include <string.h>

struct Menu {
    char nama[1000];
    int harga, exist, stok;
};

int main() {
    struct Menu menu[1000];
char namaMenu[1000];
    int total = 0, dummy2 = 0, dummy3 = 0;
    for (int i = 0; i < 1000; i++) {
        menu[i].exist = 0;
    }

    for (int i = 0; 1; i++) {
        char perintah[1000];
        scanf("%s", perintah);

        if (strcmp(perintah, "ADD") == 0) {
            int n;
            scanf("%d", &n);
			scanf(" %[^\n]", menu[n].nama);
            scanf(" %d", &menu[n].harga);
            scanf(" %d", &menu[n].stok);
            printf("Menu added\n");
            
        }
        else if (strcmp(perintah, "INFO") == 0) {
            int n;
            scanf("%d", &n);
            if (menu[n].exist == 0) {
                printf("Menu does not exist\n");
            } 
			else {
                printf("#%d %s\nharga : Rp%d\nstok : %dx\n", n, menu[n].nama, menu[n].harga, menu[n].stok);
            }
        }
        else if (strcmp(perintah, "ORDER") == 0) {
            int n = 0, m = 0;
            scanf(" %d", &n);
            scanf(" %d", &m);
            if (menu[n].exist == 0) {
                printf("Menu does not exist\n");
            }
            else if(m == 0)
                printf("So you want to order or what\n");
            else
            {
                menu[n].stok -= m;
                if(menu[n].stok < 0) printf("Apologize, the stok is not enough\n");
                else {
                    printf("Ordered %dx %s for Rp%d\n", m, menu[n].nama, menu[n].harga * m);
                    total += menu[n].harga * m;
                }
            }
        }

        else if (strcmp(perintah, "DISC") == 0) {
            int n = 0;
            long double dc = 0;
            scanf("%d %Lf", &n, &dc);
            if (menu[n].exist == 0) {
                printf("Menu does not exist\n");
            } 
			else {
            menu[n].harga = menu[n].harga - ((dc/100)*menu[n].harga);
            printf("Discount added\n");
            }
        }

        else if (strcmp(perintah, "CLOSE") == 0) {
            printf("Earnings: Rp%d\nInformatics canteen is closing... thanks for the visit!\n", total);
            break;
        }
        else if (strcmp(perintah, "REMOVE") == 0) {
            int n = 0;
            scanf("%d", &n);
            if (menu[n].exist == 0) {
                printf("Menu does not exist\n");
            } 
			else {
                printf("Menu removed\n");
                menu[n].exist = 0;
            }
        }
        else printf("Unknown perintah\n");
    }
    return 0;
}