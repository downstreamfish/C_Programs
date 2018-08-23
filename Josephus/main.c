/*
 * 循环列表示例：约瑟夫问题
 * 循环列表有N个人，从1开始，设置第(M-1)个链接跳过第M个人，一直
 * 继续下去，直到只剩下一个节点。
 */
#include <stdio.h>
#include <stdlib.h>
typedef struct node* link;
struct node {
    int item;
    link next;
};
int cnt_list(link head);
int main(int argc, char *argv[])
{
    int counter, i, N = atoi(argv[1]), M = atoi(argv[2]);
    link t = malloc(sizeof(*t)), x = t;
    t->item = 1;
    t->next = t;
    for (i = 2; i <= N; i++){
        x = (x->next = malloc(sizeof(*x)));
        x->item = i;
        x->next = t;
    }
    counter = cnt_list(t);
    while(x != x->next){
        for(i = 1; i < M; i++){
            x = x->next;
        }
        x->next = x->next->next;
        N--;
    }
    printf("size of list is: %d\n", counter);
    printf("%d\n", x->item);
    return 0;
}
int cnt_list(link head)
{
    int counter = 1;
    link tmp = head;
    while(tmp->next != head){
        tmp = tmp->next;
        counter++;
    }
    return counter;


}
