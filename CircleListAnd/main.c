#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

int main()
{
    int cnt_a, cnt_b, cnt_c;
    link circleA = create_list(9);
    link circleB = create_list(5);
    cnt_a = cnt_list(circleA);
    cnt_b = cnt_list(circleB);
    tranverse(circleA);
    tranverse(circleB);
    link circleC = link_and(circleA, circleB);
    cnt_c = cnt_list(circleC);
    tranverse(circleC);
    printf("List A: %d, List B: %d, list C: %d\n", cnt_a, cnt_b, cnt_c);
    return 0;
}
