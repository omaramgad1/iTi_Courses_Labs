#include <stdio.h>
#include <stdlib.h>
#include "BST.h"
int main()
{
    Tree t;

    Create_tree(&t);

    insert_into_tree(&t,50);
    insert_into_tree(&t,40);
    insert_into_tree(&t,40);
    insert_into_tree(&t,65);
    insert_into_tree(&t,70);
    insert_into_tree(&t,60);
    insert_into_tree(&t,55);
    insert_into_tree(&t,45);
    insert_into_tree(&t,30);
    insert_into_tree(&t,36);
    insert_into_tree(&t,25);
    insert_into_tree(&t,33);

   insert_into_tree(&t,42);
    Display(&t);
/*
            50
      40         65
  30     45    60    70
25   35       55
   33
*/
    Remove(&t,50);
    printf("\n");

    Display(&t);
    return 0;
}
