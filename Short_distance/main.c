
#include "point.h"

int main()
{
    int i, j, cnt = 0;
    int max = N * (N - 1) / 2;
    float d[max];
    float min_dis;
    Point *a = malloc(N * sizeof(Point));
    for (i = 0; i < N; i++){
        a[i].x = randNum();
        a[i].y = randNum();
    }
    for(i = 0; i < N; i++){
        for(j = i + 1; j < N; j++){
            if(cnt < max){
                d[cnt] = distance(a[i], a[j]);
                cnt++;
            }
        }
    }
    min_dis = find_min(d, max);
    for(i = 0; i < N; i++){
        for(j = i + 1; j < N; j++){
            if(min_dis == distance(a[i], a[j])){
                printf("The nearest points is (%.3f, %.3f) and (%.3f, %.3f)",
                       a[i].x, a[i].y, a[j].x, a[j].y);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
