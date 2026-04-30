#include "space_age.h"
// orbital period in Earth Years for respective planets in enum list
float periods[] = {0.2408467, 0.61519726, 1.0, 1.8808158, 11.862615, 29.447498, 84.016846, 164.79132};

// convert seconds to earth years
float secToyear(int64_t seconds){
    return seconds/(3600.0*24.0*365.25);
}

// find age on each planet
float age(planet_t planet, int64_t seconds){
    if (planet < 0 || planet > 7){
        return -1;
    }
    return secToyear(seconds)/periods[planet];
}