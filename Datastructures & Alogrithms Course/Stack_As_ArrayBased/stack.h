#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX 5



typedef struct Stack{

int top;

int arr[MAX];

}Stack;


void create_stack(Stack *s);
void push (Stack *s , int data);
int pop (Stack *s , int *data);
void display(Stack s);



#endif // STACK_H_INCLUDED
