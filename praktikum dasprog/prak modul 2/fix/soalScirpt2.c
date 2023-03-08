#include <stdio.h>
#include <string.h>

// ngecek dari kata2 yg di input, kalau ada 4 vocal berurut oke

int main () {
    
    char s[1000]; // batasan jumlah huruf yg di input

    int x; 
    scanf("%d\n", &x);

    int cek = 0; // untuk ngecek akan ada brp vokal, nnti di tambah

    for (int i = 0; i < x; i++) //untuk ngulang baca sesuai sebanyak inputannya
    {
        gets(s);// ngambil nilai charnya; cth aaaa, aa uu (pakai gets biar ngambil spasi)
        for (int isi = 0; s[isi] != '\0'; isi++) // ngecek isinya 1 per 1, \0 akhir
        {
            if (s[isi] == ' ') continue; // kalau ketemu spasi di skip, gausah di cek
            else if (s[isi] == 'a'|| s[isi] == 'i' || s[isi] == 'u' || s[isi] == 'e' || s[isi] == 'o') cek++; // kalau vokal cek di hitung tambah 1
            else cek = 0; // kalau udh ga berurut langsung ngulang cek = 0

            if (cek == 4) break;// kalau udh 4 langsung berhenti print benar
        }

        if (cek >= 4) printf("Solid Script\n");
        else printf("Fake Script\n");
        cek = 0;
    }
    return 0;
}