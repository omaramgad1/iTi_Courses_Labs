#define SIZE 5

/*

1. int* IncrementArray()
	- try to return fixed Array first, see what happened.
	- then rerun dynamically allocated array.
*/

/// stack
int* IncrementArray(){

static int arr[SIZE] ={1,2,3,4,5};
for(int i=0; i<SIZE ;i++){
    arr[i]=arr[i]+1;
        }

return arr;

}
//heap
int* IncrementArray_2(){

int *ptr = (int *)malloc(SIZE*sizeof(int));

for(int i=0; i<SIZE ;i++){
ptr[i]=i+1;

        }

return ptr;
}
void Question_1(){

 int * ptr =IncrementArray_2();

    for(int i=0;i<SIZE;i++){
        printf("%d\n",ptr[i]);
}




}
