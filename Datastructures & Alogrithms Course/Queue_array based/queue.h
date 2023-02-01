#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define MAX 5

typedef struct Queue{

int Front;
int Rear;
int Size;
int arr[MAX];

}Queue;

void create_queue(Queue *q);
void Enqueue(Queue *q , int data);
void Dequeue( Queue *q , int *data);
void display(Queue q);





#endif // QUEUE_H_INCLUDED
