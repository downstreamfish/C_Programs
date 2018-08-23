     typedef struct node * link;
     struct node{
        int item;
        link next;
     };

    void tranverse(link head);
    int cnt_list(link head);
    link reverse(link x);

    link create_list(int N);

    link link_and(link a, link b);
