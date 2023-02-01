#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

int main()
{

    BST t;

    create_bst(&t);

    Insert_into_bst(&t,50);
    Insert_into_bst(&t,40);
    Insert_into_bst(&t,30);
    Insert_into_bst(&t,60);
    Insert_into_bst(&t,70);
    Insert_into_bst(&t,55);
    Insert_into_bst(&t,65);
    Insert_into_bst(&t,45);
    Display(&t);

/*
        50
    40       60
  30   45  55   65
                   70

*/

printf("\nThe Max Depth is : %d ",GetMaxDepth(&t));

    Delete_from_BST(&t,50);
    Delete_from_BST(&t,70);

    printf("\n");
    Display(&t);
/*
        45
    40       60
 30       55    65
                   70

*/


printf("\nThe Max Depth is : %d ",GetMaxDepth(&t));



    return 0;
}
