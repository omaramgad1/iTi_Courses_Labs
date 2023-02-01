#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void create_stack(Stack *s){

  s->top=-1;
}


void push (Stack *s , int data){

if(s->top == MAX-1)
    return;

s->top++;

s->arr[s->top]=data;

}


int pop (Stack *s , int *data){

    if(s->top == -1)
        return 0;


    *data=s->arr[s->top];
    s->top--;


    return 1;
}


void display(Stack s){


for(int i=s.top;i>=0;i--){

    printf("%d\n",s.arr[i]);

}

}




