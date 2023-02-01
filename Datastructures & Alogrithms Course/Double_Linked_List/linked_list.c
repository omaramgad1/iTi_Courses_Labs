#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>

void create_linked_list(LinkedList * L){
L->head = NULL;
L->tail =NULL;

}

void Add(LinkedList * L,int data)
{
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->Data = data;
    newNode->Prev = newNode->Next = NULL;

    if(L->head == NULL)
    {
        L->head = L->tail = newNode;

    }
    else
    {
        L->tail->Next = newNode;
        newNode->Prev = L->tail;
        L->tail = newNode;

    }
}


void Display(LinkedList * L)
{
    Node *current = L->head;

    while(current != NULL)
    {
        printf("%d   ", current->Data);
        current = current->Next;
    }
}


Node* GetNodeByData(LinkedList * L,int data)
{
    Node *current = L->head;

    while(current != NULL)
    {
        if(data == current->Data)
            return current;

        current = current->Next;
    }

    return NULL;
}


void Remove(LinkedList * L,int data)
{
    Node *node = GetNodeByData(L,data);

    if(node == NULL)
        return;

    if(node == L->head)
    {
        if(L->head ==  L->tail)
        {
            L->head =  L->tail = NULL;
        }
        else
        {
             L->head =  L->head->Next;
             L->head->Prev = NULL;
        }
    }
    else if(node ==  L->tail)
    {
        L-> tail =  L->tail->Prev;
        L->tail->Next = NULL;
    }
    else
    {


        node->Prev->Next = node->Next;
        node->Next->Prev = node->Prev;
    }

    free(node);
}



void InsertAfter( LinkedList * L , int data , int afterData){

    Node *node = GetNodeByData(L,afterData);


    if(node == NULL)
        return;

    else{

    Node *newNode = malloc(sizeof(Node));
    newNode->Data = data;

    newNode->Next =node->Next;


    if( node == L->tail){

       L->tail=newNode;

    }

    else{
        node->Next->Prev=newNode;

        }


    newNode->Prev=node;
    node->Next=newNode;

    }


     }



int GetCount(LinkedList * L){


    int size=0;
    Node *current = L->head;

    while(current != NULL)
    {
        size++;
        current = current->Next;
    }
    return size;
}



int GetDataByIndex(LinkedList * L , int index){


    int size=GetCount(L);


    if(index < size && index >=0)
    {

    Node *current = L->head;

    for(int i =0;i<index;i++){
            current = current->Next;

        }

    return current->Data ;


    }



else {

    return -1;
}
}


void BubbleSort(LinkedList *l)
{
    int sorted = 0;
    Node *curr = l->head;
    Node *next_curr = l->head->Next;


    while(!sorted)
    {
        sorted=1;



        while(current->Next != NULL)
        {
            if(current->Data > Ncurrent->Data)
            {
                Swap(current,Ncurrent,l);
                sorted=0;
            }



            curr  = next_curr;
            next_curr = next_curr->Next;
        }



        curr  = l->head;
        next_curr = l->head->Next;
    }


}




void Swap(Node *first, Node *second)
{
    int temp = first->data;
    first->data = second->data;
    second->data = temp;
}








