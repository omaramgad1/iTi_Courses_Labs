#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>

void create_LinkedList ( Linked_list *l){

    l->head = NULL;
    l->tail = NULL;

}

void Add(Linked_list *l ,int data){

    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->data= data;
    newnode->next =NULL;


    if(l->head==NULL){

    l->head = newnode;

    }

    else{
        l->tail->next =newnode;
    }

    l->tail =newnode;

}



Node * Getnode(Linked_list *l , int data){

    Node * cur = l->head;

    while(cur != NULL){

        if(cur->data == data)
            return cur;


        cur=cur->next;
    }

    return NULL;

}



void Remove  (Linked_list *l , int data){

   Node * cur = Getnode( l , data);
   Node *ptr ;

   if(l->head == NULL && l->tail == NULL)
   {
       printf("List Empty");
        return;
   }



   else{

        if(cur==NULL){
            printf("Wrong Data");
            return;
        }



        if(cur == l->head){

            if(cur==l->tail){

                l->head=l->tail=NULL;
            }

            else{
                l->head = cur->next;

            }


        }


        else{

            ptr =l->head;

                while(ptr->next!= cur){

                   ptr=ptr->next;
                }

             ptr->next = cur->next;



        if(cur == l->tail){
            l->tail=ptr;

        }


        }

    free(cur);


   }





}



void Display(Linked_list * L)
{
    Node *current = L->head;

    while(current != NULL)
    {
        printf("%d   ", current->data);
        current = current->next;
    }
}



void Swap(Node *first, Node *second)
{
    int temp = first->data;
    first->data = second->data;
    second->data = temp;
}




void BubbleSort(Linked_list *l)
{
    Node *cur  = l->head;
    Node *next_cur = l->head->next;

    int sorted = 0;

    while(!sorted){


        sorted = 1;

        while(cur->next != NULL)
        {

            if(cur->data > next_cur->data)
            {
                Swap(cur, next_cur);
                sorted = 0;
            }

            cur=next_cur;
            next_cur = cur->next;


        }
        cur  = l->head;
        next_cur = l->head->next;



    }




}
























