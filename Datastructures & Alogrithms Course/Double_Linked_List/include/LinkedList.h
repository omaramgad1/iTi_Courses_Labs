#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node Node;

struct Node
{
    int Data;
    Node *Prev, *Next;
};

typedef struct LinkedList
{
    Node *head, *tail;

}LinkedList;


void create_linked_list(LinkedList * L);
void Add(LinkedList * L,int data);
void Display(LinkedList * L);
Node* GetNodeByData(LinkedList * L,int data);
void Remove(LinkedList * L,int data);
void InsertAfter(LinkedList * L,int data, int afterData);
int GetCount(LinkedList * L);
int GetDataByIndex(LinkedList * L , int index);
void Swap(Node *current,Node*Ncurrent, LinkedList *l);
void BubbleSort(LinkedList *l);
#endif // LINKEDLIST_H
