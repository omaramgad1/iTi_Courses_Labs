#include"stack.h"
#include <stdio.h>
#include <stdlib.h>

void create_stack(Stack_l *s){

    s->top=NULL;
}

void push_to_stack(Stack_l *s , int data){

    Node *newnode=malloc(sizeof(Node));

    newnode->data = data;

    newnode->next = s->top;

    s->top = newnode;


}

int pop_from_stack(Stack_l *s , int *data){

    Node *node;

    if(s->top == NULL){
        return 0;

    }

    else{

        node=s->top;
        *data = node->data;

        s->top = node->next;

        free(node);



        return 1;

    }



}

void display(Stack_l *s){
Node *current;

current =s->top;

while(current!=NULL){

    printf("%d ",current->data);
    current=current->next;

}

}




int  peek(Stack_l *s){

return s->top->data;
}
