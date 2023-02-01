#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

// any linked list must contain 2 struct ----> first node , second linked list

typedef struct node
{
    int data;
    struct node *next;

}Node;


typedef struct linked_list {

    Node * head;
    Node * tail;

}Linked_list;




void create_LinkedList ( Linked_list *l);
void Add(Linked_list *l ,int data);
Node * Getnode(Linked_list *l , int data);
void Remove (Linked_list *l , int data);
void Display(Linked_list * L);
void BubbleSort(Linked_list *l);
void Swap(Node *first, Node *second);

#endif // LINKEDLIST_H_INCLUDED
