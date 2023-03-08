#include <stdio.h>

int main () {
    // deklarasi variabelnya
    int var = 5;
    // ngeprint nilai varnya
    printf("%d\n", var);
    // ngeprint alamat varnya
    printf("%p", &var);

    // %p print alamat basis 16
    // %d print alamat basis 10 (desimal)
    // jgn lupa pakai &
    return 0;
}