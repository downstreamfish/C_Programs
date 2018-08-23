#include <stdio.h>
#include <stdlib.h>
#include "node.h"
void tranverse(PNode pnode);
int main(int argc, char* argv[])
{
    int i, N = 10;
    struct node heada, headb;
    PNode t, u, x, a = &heada, b;

    for (i = 0, t = a; i < N; i++){
        t->next = malloc(sizeof(*t));
        t = t->next;
        t->next = NULL;
        t->item = rand() % 1000;
    }
    tranverse(&heada);
    b = &headb;
    b->next = NULL;
    for(t = a->next; t != NULL; t = u){
        u = t->next;
        for(x = b; x->next != NULL; x = x->next){
            if(x->next->item > t->item){
                break;
            }
        }
        t->next = x->next;
        x->next = t;
    }
    tranverse(&headb);
    printf("Hello world!\n");
    return 0;
}
void tranverse(PNode pnode)
{
    PNode p = pnode->next;
    do{
        printf("%d ", p->item);
        p = p->next;
    }while(p != NULL);
    printf("\n");
}
