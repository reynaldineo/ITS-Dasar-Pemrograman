#include <stdio.h> 

int text () {
    // 1
    plan_txt_inp =
        fopen("planets.txt", "r");
    doub_txt_inp =
        fopen("nums.txt", "r");

    // 2
    plan_txt_outp =
    fopen("pl_out.txt", "w");
    doub_txt_outp =
    fopen("nm_out.txt", "w");
    
    // 3
    fscanf(plan_txt_inp,
        "%s%lf%d%lf%lf",
        a_planet.name,
        &a_planet.diameter,
        &a_planet.moons,
        &a_planet.orbit_time,
        &a_planet.rotation_time);
    
    // 4
    fprintf(plan_txt_outp,
    "%s %e %d %e %e",
    a_planet.name,
    a_planet.diameter,
    a_planet.moons,
    a_planet.orbit_time,
    a_planet.rotation_time);

}

int binary () {
    // 1
    plan_bin_inp =
        fopen("planets.bin", "rb");
    doub_bin_inp =
        fopen("nums.bin", "rb");

    // 2
    plan_bin_outp =
    fopen("pl_out.bin", "wb");
    doub_bin_outp =
    fopen("nm_out.bin", "wb");

    // 3
    fread(&a_planet,
    sizeof (planet_t),
    1, plan_bin_inp);

    // 4
    fwrite(&a_planet,
    sizeof (planet_t),
    1,
}

int main () {


return 0;
}