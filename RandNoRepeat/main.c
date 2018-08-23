#include <stdio.h>
#include <stdlib.h>
#define N 1000
int randNum()
{
    return rand() % N;
}
int isfull(int a[], int n)
{
    int i;
    int full = 1;
    for(i = 0; i < n; i++){
        if(!a[i]){
            full = 0;
            break;
        }
    }
    return full;
}
int main()
{

    int i, a[N], cnt = 0;
    int tmp;
    for(i = 0; i < N; i++){
        a[i] = 0;
    }

    while(1){
        tmp = randNum();
        if(!isfull(a, N)){
            a[tmp] = 1;
            cnt++;
        }else{
            break;
        }
    }
    printf("before rand number repeat, there are %d numbers.", cnt);
    printf("\n");
    return 0;
}
