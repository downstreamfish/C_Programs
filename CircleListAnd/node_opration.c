#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
/* 循环链表计数 */
int cnt_list(link head)
{
    int counter = 0;
    link temp = head;
    do{
        temp = temp->next;
        ++counter;
    }while(temp != head);
    return counter;
}
/**循环链表的遍历 */
void tranverse(link head)
{
    link temp = head->next;
    do{
        printf("%d ", temp->item);
        temp = temp->next;
    }while(temp != head->next);
    printf("\n");
}
/* 普通链表的逆序 */
link reverse(link x)
{
    link t, y = x, r = NULL;
    while(y != NULL){
        t = y->next;
        y->next = r;
        r = y;
        y = t;
    }
    return r;
}
/** \创建循环链表
 *
 * \param
 * \param
 * \return
 *
 */

link create_list(int N)
{
    int i;
    link t = malloc(sizeof(*t)), x = t;
    t->item = 1;
    t->next = t;
    for (i = 2; i <= N; i++){
        x = (x->next = malloc(sizeof(*x)));
        x->item = i;
        x->next = t;
    }
    return x;
}

link link_and(link a, link b)
{
    link t = a->next;
    a->next = b->next;
    b->next = t;
    return t;
}
