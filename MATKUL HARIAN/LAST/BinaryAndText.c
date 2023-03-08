#include <stdio.h>
#include <string.h>
#include <planet.h>

int main() {
    planet_t current_planet, previous_planet, blank_planet = {"", 0, 0, 0, 0};

    strcpy(current_planet.name, "Jupiter");
    current_planet.diameter = 142800;
    current_planet.moons = 16;
    current_planet.orbit_time = 11.9;
    current_planet.rotation_time = 9.925;

    printf("%s's equatorial diameter is %.lf km.\n", current_planet.name, current_planet.diameter);
    saveBinary(&current_planet);
    saveTxt(&current_planet);

    return 0;
}