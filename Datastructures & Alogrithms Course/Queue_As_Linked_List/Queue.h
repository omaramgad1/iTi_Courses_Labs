#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED


typedef struct node {

    int data;
    struct node *next;

}Node;


typedef struct Queue_linked{

      Node *Front , *Rear;


}Queue_l;



void Create_Queue(Queue_l *q);
void inqueue(Queue_l *q , int data);
int dequeue(Queue_l *q , int *data);
void display(Queue_l *q);


#endif // QUEUE_H_INCLUDED
