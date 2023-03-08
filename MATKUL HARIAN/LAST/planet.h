#include <stdio.h>
#define STRSIZ 10
#define MAX 40

typedef struct {
    char name[STRSIZ];
    double diameter;
    int moons;
    double orbit_time, rotation_time;

} planet_t;

typedef struct {
    double diameter;
    planet_t planets[9];
    char galaxy[STRSIZ];

} solar_sys_t;

void saveBinary(planet_t *a_planet) {
    FILE *plan_bin_outp;
    plan_bin_outp = fopen("pl_out.bin", "wb");
    fwrite(&a_planet, sizeof(planet_t), 1, plan_bin_outp);
    fclose(plan_bin_outp);
}

void saveTxt(planet_t *a_planet) {
    FILE  *plan_txt_outp;
    plan_txt_outp = fopen("pl_out.txt", "w");
    fprintf(plan_txt_outp,
        "%s %e %d %e %e",
        a_planet->name,
        &a_planet->diameter,
        &a_planet->moons,
        &a_planet->orbit_time,
        &a_planet->rotation_time
    );
    fclose(plan_txt_outp);
}