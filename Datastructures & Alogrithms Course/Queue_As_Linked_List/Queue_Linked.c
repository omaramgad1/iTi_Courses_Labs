#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"


void Create_Queue(Queue_l *q){

q->Front=q->Rear=NULL;
}


void inqueue(Queue_l *q , int data){

    Node * newnode = malloc(sizeof(Node));
    newnode->data=data;
    newnode->next=NULL;

    if(q->Front==NULL)
    {
        q->Front=newnode;
    }

    else{
        q->Rear->next=newnode;


    }
  q->Rear=newnode;


}


int dequeue(Queue_l *q , int *data){

    if(q->Front==NULL)
        return 0;

    Node *n;

    n=q->Front;

    if(q->Front==q->Rear){

        q->Front=q->Rear=NULL;
    }

    else{

        q->Front=n->next;

        }

    *data=n->data;
    free(n);

    return 1 ;
}

void display(Queue_l *q){
Node *current;

current =q->Front;

while(current!=NULL){

    printf("%d ",current->data);
    current=current->next;

}

}





