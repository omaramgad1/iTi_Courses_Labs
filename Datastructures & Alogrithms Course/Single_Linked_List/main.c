#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"



int main()
{
    Linked_list x;

    create_LinkedList(&x);


    Add(&x,5);
    Add(&x,7);
    Add(&x,11);
    Add(&x,9);
    Add(&x,2);

    Display(&x);

    printf("\n");

    BubbleSort(&x);

    Display(&x);


    return 0;
}
