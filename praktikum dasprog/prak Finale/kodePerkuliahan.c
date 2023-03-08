#include<stdio.h>
#include<string.h>
#define strsiz = 15

// typedef struct {
//     int deg;
//     char dir;
// }long_lat_t;

typedef union {
    int wears_wig;
    char color[20];
} hair_t;


// typedef struct{
//     char place [strsiz];
//     long_lat_t longitude, latitude;
// }location_t;

typedef struct {
    int bald;
    hair_t h;
} hair_info_t;


void print_hair_info(hair_info_t hair){
    if (hair.bald) {
        printf("Subject is bald");
    if (hair.h.wears_wig)
        printf(", but wears a wig.\n");
    else
        printf(" and does not wear a wig.\n");
    } else {
        printf("Subject's hair color is %s.\n", hair.h.color);
    }
}


// int main (){
//     location_t resort;
//     strcpy(resort.place, "panas");
//     resort.latitude.deg = 2;
//     strcpy(resort.latitude.dir, "N");
//     resort.latitude.deg = 3;
//     strcpy(resort.longitude.dir, "W");
//     // printf("%s %d%c %d%c", resort.place, resort.latitude.deg, resort.latitude.dir, resort.longitude.deg, resort.longitude.dir);

// }

int main (){
    hair_info_t mario;
    mario.bald = 1;
    mario.h.wears_wig = 0;
    print_hair_info(mario);

    return 0;
}