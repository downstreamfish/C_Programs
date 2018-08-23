#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
typedef struct node* link;
struct node{
    int item;
    link next;
} ;
typedef link Node;

void initNode(int);
link newNode(int);
void freeNode(link);
void insertNext(link, link);
link deleteNext(link);
link Next(link);
int Item(link);

#endif // LIST_H_INCLUDED
