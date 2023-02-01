#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"

int main()
{
    LinkedList l;

    create_linked_list(&l);
    Add(&l,5);
    Add(&l,3);
    Add(&l,9);
    Add(&l,7);
    Display(&l);
    printf("\n");
    BubbleSort(&l);

    Display(&l);

/*
    Remove(&l,7);

    Display(&l);
    printf("\n\n");

    InsertAfter(&l,10,9);
*/


    /*
    printf("\n\n");
    InsertAfter(&l,10,3);
    Display(&l);
    printf("\n\n");
    printf("\n%d",GetCount(&l));
   */
   /*
   int x=GetDataByIndex(&l,7);
    if(x!=-1){
    printf("\n%d",x);
    }
    else{ printf("\nUnvaild index");}
*/
    return 0;
}
