#include "darts.h"


/**
 * Checks if a point (x, y) is inside or on the boundary of a circle.
 * @param r: Radius of the circle
 * @param x, y: Coordinates of the point to check
 * @return: true if inside or on boundary, false otherwise
 */
bool isInside(coordinate_t landing_position, float r) {
    // Compare squared distance to squared radius
    return (landing_position.x *landing_position.x + landing_position.y * landing_position.y ) <= (r * r);
}


int score(coordinate_t landing_position){
    //limits of circle
    if (isInside(landing_position, 10) && !isInside(landing_position, 5)){
        return 1;
    }
    if (isInside(landing_position, 5) && !isInside(landing_position, 1)){
        return 5;
    }
    if (isInside(landing_position, 1)){
        return 10;
    }
    else{
        return 0;
    }
}