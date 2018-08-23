#include <stdio.h>
#include <stdlib.h>
#define N 10
typedef struct {
    float x;
    float y;
}Point;
float randNum();
float distance(Point a, Point b);
float find_min(float a[], int);
