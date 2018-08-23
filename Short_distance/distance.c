#include <math.h>
#include "point.h"

float distance(Point a, Point b)
{
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}
float randNum()
{
    return 1.0 * rand() / RAND_MAX;
}

float find_min(float a[], int max)
{
    int i;
    float min;
    min = a[0];

    for(i = 0; i < max; i++){
        printf("%.3f ", a[i]);
        if(min > a[i]){
            min = a[i];
        }
    }
    printf("\n min=%.3f\n", min);
    return min;
}
