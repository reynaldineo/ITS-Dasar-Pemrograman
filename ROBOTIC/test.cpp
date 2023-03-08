#include <iostream>

    int penjumlahan(int x, int y)
    {
        int hasil;
        hasil = x + y;
        return hasil;
    }

    int main() 
    {
        int a, b, data;

        std::cin >> a;
        std::cin >> b;

        data = penjumlahan(a,b);

        std::cout << data << std::endl;
        return 0;
    }