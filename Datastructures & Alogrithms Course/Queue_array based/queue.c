#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


void create_queue(Queue *q){

q->Front = -1 ;
q->Rear  = -1 ;

}


void Enqueue(Queue *q , int data){

    if((q->Front == 0 && q->Rear == MAX-1) || (q->Front == q->Rear + 1))
        return;

    if(q->Front == -1 ){

        q->Front=q->Rear=0;
    }


    else{

       if(q->Rear == MAX-1)
            q->Rear=0;
       else
            q->Rear++;

       // rear = (rear+1)% max
    }

    q->arr[q->Rear]=data;

}

void Dequeue( Queue *q , int *data){

    if(q->Front == -1)
        return;

    *data =  q->arr[q->Front];

    if(q->Front == q->Rear)
    {

        q->Front=q->Rear=-1;
    }

    else
    {
        if(q->Front == MAX-1)
            q->Front=0;
        else
            q->Front++;



    }

}


void display(Queue q){

    if(q.Front==-1)
        return;
    int i;

    for( i = q.Front ; i!= q.Rear; )
    {

        printf("%d\n",q.arr[i]);


       if(i == MAX-1)
            i=0;
       else
            i++;

    // i = (i+1)%MAX;


    }
    printf("%d\n",q.arr[i]);

}
