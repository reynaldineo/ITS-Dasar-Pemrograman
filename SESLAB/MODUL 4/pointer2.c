#include <stdio.h>

int main () {
    // deklarasi variabelnya
    int var = 5;
    // ngeprint nilai varnya
    printf("niali var = %d\n", var);
    // ngeprint alamat varnya
    printf("alamat var = %p\n", &var);

    // %p print alamat basis 16
    // %d print alamat basis 10 (desimal)
    // jgn lupa pakai &


    // deklarasi pointer
    // int *p;
    // p = &var;

    // atau lebih efisien
    int *p = &var;

    // ngeprint alamat 16 basis
    printf("%p\n", p);
    // ngeprint alamat 10 basis
    printf("%d\n", p);

    //ngeprint nilai var atau *p yg udh dimasukin nilai var
    printf("%d\n", *p);
    // ngeprint alamat p
    printf("%d", &p);
    return 0;
}