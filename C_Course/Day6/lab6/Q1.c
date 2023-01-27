
#define SIZE 2

/*
1) Input and Output from Array using pointers:
  C Program that have an Array of integers , read array data from user,
  Ptr -> Arr,
  print that array using Ptr.
 (try to use "Array Notation while reading data" and
  "Pointer notation while printing data")
*/

void Question_1(){






int array[SIZE];

int *ptr;


ptr=array;




for(int i= 0; i<SIZE ; i++){
    printf("\nEnter User ID No.%d : ",i+1);
    scanf("%d",&ptr[i]);
}
printf("\n----------------------\n");
for(int i =0 ; i<SIZE ; i++){
    printf("\nUser ID No.%d : %d ",i+1,ptr[i]);

}
// Array notation
/*
printf("\n----------------------\n");
for(int i= 0; i<SIZE ; i++){
    printf("\nEnter User ID No.%d : ",i+1);
    scanf("%d",(ptr+i));
}
printf("\n----------------------\n");
for(int i =0 ; i<SIZE ; i++){
    printf("\nUser ID No.%d : %d ",i+1,*(ptr+i));

}

*/










}
