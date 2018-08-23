#include <stdio.h>
#include <stdlib.h>
#include "point_data.h"


int main()
{
    int i, j, k;
    Point *p = malloc(20 * sizeof(Point));

    for(i = 0; i < 20; i++){
 //       p[i].x = 2;
 //       p[i].y = i;
        printf("%d", i);
    }

    p[1].x = 9;
    p[1].y = 5;
    for(i = 0; i < 20; i++){

        printf("%d", i);

        for(j = 1; j < 20; j++){
            if(p[1].x == i && p[1].y == j){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
