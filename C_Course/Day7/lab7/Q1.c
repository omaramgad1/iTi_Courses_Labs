


/*
1) Input and Output from Array using pointers:
  C Program that have an Array of integers , read array data from user,
  Ptr -> Arr,
  print that array using Ptr.
 (try to use "Array Notation while reading data" and
  "Pointer notation while printing data")
*/




void Question_1(){

int size;
printf("Enter Size of Array :");
scanf("%d",&size);

int *array=(int *)malloc(size*sizeof(int));

int *ptr;


ptr=array;




for(int i= 0; i<size ; i++){
    printf("\nEnter User ID No.%d : ",i+1);
    scanf("%d",&ptr[i]);
}




printf("\n----------------------\n");
for(int i =0 ; i<size ; i++){
    printf("\nUser ID No.%d : %d ",i+1,ptr[i]);

}
// ptr --> array
/*
for(int i= 0; i<size ; i++){
    printf("\nEnter User ID No.%d : ",i+1);
    scanf("%d",(ptr+i));
}

printf("\n----------------------\n");

for(int i =0 ; i<size ; i++){
    printf("\nUser ID No.%d : %d ",i+1,*(ptr+i));

}
*/

}
