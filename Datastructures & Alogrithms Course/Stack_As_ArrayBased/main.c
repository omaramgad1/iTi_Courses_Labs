#include <stdio.h>
#include <stdlib.h>

#include "stack.h"
int main()
{

Stack x;
int a;
create_stack(&x);


push(&x,1);
push(&x,2);
push(&x,3);
push(&x,4);
push(&x,5);


display(x);

    return 0;
}
