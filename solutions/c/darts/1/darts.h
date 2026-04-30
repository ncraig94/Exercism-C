#ifndef DARTS_H
#define DARTS_H
#include <stdbool.h>

typedef struct {
    float x;
    float y;
} coordinate_t;

int score(coordinate_t landing_position);
bool isInside(coordinate_t landing_position, float r);
#endif
