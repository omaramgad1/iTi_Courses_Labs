#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int main()
{

    Queue_l q;
    int x;
    Create_Queue(&q);

    inqueue(&q,5);
    inqueue(&q,6);
    inqueue(&q,7);
    inqueue(&q,8);
    display(&q);
    printf("\n");

    if(dequeue(&q,&x)==1)
        printf("%d",x);

    printf("\n");
    display(&q);
    return 0;
}
