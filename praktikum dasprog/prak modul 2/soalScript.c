#include <stdio.h>
#include <string.h>

int main () {
    
    char s[1000];

    int x; // input mau berapa baris
    scanf("%d\n", &x);

    int cek = 0;

    for (int i = 0; i < x; i++)// untuk perulangan input
    {
        gets(s);
        for (int isi = 0; s[isi] != '\0'; isi++)//ngecek isi dari stringnya 1 per 1
        {
            if (s[isi] == ' ') continue; // kalau ketemu spasi, di skip, engga dibaca/dicek
            else if (s[isi] == 'a'|| s[isi] == 'i' || s[isi] == 'u' || s[isi] == 'e' || s[isi] == 'o') cek++;
            else cek = 0; // agar berurut

            if (cek == 4) break;
        }

        if (cek >= 4) printf("Solid Script\n");
        else printf("Fake Script\n");
    }
    return 0;
}