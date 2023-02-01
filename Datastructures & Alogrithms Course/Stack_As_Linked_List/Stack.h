#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED


typedef struct node {

    int data;
    struct node *next;

}Node;


typedef struct Stack_linked{

      Node *top;


}Stack_l;

void create_stack(Stack_l *s);
void push_to_stack(Stack_l *s , int data);
int pop_from_stack(Stack_l *s , int *data);
void display(Stack_l *s);

#endif // STACK_H_INCLUDED
