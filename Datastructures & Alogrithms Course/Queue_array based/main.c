#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main()
{


    Queue x;
    int a;
    create_queue(&x);

    Enqueue(&x,1);
    Enqueue(&x,3);
    Enqueue(&x,5);
    Enqueue(&x,7);
    Enqueue(&x,11);

    display(x);
/*
    for(int i=0;i<MAX;i++){

        Dequeue(&x,&a);

        printf("%d\n",a);
    }
*/
    return 0;
}
