#include <stdio.h>
#include <string.h>

struct Menu {
    char name[1000];
    long long price, exist, stock;
};

int main() {
    struct Menu menu[1000];
    char dummy1[1000];
    long long total = 0, dummy2 = 0, dummy3 = 0;
    for (long long i = 0; i < 1000; i++) {
        menu[i].exist = 0;
    }

    for (int i = 0; 1; i++) {
        char command[1000];
        scanf(" %s", command);
        if (strcmp(command, "ADD") == 0) {
            long long n = 0;
            scanf(" %lli", &n);
            if (menu[n].exist == 1) {
                scanf(" %[^\n]", dummy1);
                scanf(" %lli", &dummy2);
                scanf(" %lli", &dummy3);
                printf("Menu is already exist\n");
            } else {
                menu[n].exist = 1;
                scanf(" %[^\n]", menu[n].name);
                scanf(" %lli", &menu[n].price);
                scanf(" %lli", &menu[n].stock);
                printf("Menu added\n");
            }
        }
        else if (strcmp(command, "INFO") == 0) {
            long long n = 0;
            scanf(" %lli", &n);
            if (menu[n].exist == 0) {
                printf("Menu does not exist\n");
            } else {
                printf("#%lli %s\nPrice : Rp%lli\nStock : %llix\n", n, menu[n].name, menu[n].price, menu[n].stock);
            }
        }
        else if (strcmp(command, "ORDER") == 0) {
            long long n = 0, m = 0;
            scanf(" %lli", &n);
            scanf(" %lli", &m);
            if (menu[n].exist == 0) {
                printf("Menu does not exist\n");
            }
            else if(m == 0)
                printf("So you want to order or what\n");

            else
            {
                menu[n].stock -= m;
                if(menu[n].stock < 0)
                    printf("Apologize, the stock is not enough\n");
                else
                {
                    printf("Ordered %llix %s for Rp%lli\n", m, menu[n].name, menu[n].price * m);
                    total += menu[n].price * m;
                }
            }
        }

        else if (strcmp(command, "DISC") == 0)
        {
            long long n = 0;
            long double dc = 0;
            scanf("%lli %Lf", &n, &dc);
            if (menu[n].exist == 0) {
                printf("Menu does not exist\n");
            } else
            {
            menu[n].price = menu[n].price - ((dc/100)*menu[n].price);
            printf("Discount added\n");
            }

        }

        else if (strcmp(command, "CLOSE") == 0) {
            printf("Earnings: Rp%lli\nInformatics canteen is closing... thanks for the visit!\n", total);
            break;
        }
        else if (strcmp(command, "REMOVE") == 0) {
            long long n = 0;
            scanf("%lli", &n);
            if (menu[n].exist == 0) {
                printf("Menu does not exist\n");
            } else {
                printf("Menu removed\n");
                menu[n].exist = 0;
            }
        }
        else
            printf("Unknown command\n");

    }

    return 0;
}