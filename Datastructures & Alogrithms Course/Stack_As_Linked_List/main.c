#include <stdio.h>
#include <stdlib.h>

#include"stack.h"

int main()
{

    Stack_l s;
    int x;
    create_stack(&s);

    push_to_stack(&s,5);
    push_to_stack(&s,6);
    push_to_stack(&s,7);
    push_to_stack(&s,8);

    display(&s);
    printf("\n");

    if(pop_from_stack(&s,&x)==1)
        printf("%d",x);


    printf("\n");
    display(&s);




    //printf("%d",peek())
    return 0;
}
