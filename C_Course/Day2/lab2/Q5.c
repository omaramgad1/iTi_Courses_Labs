
void Question_5(){
//5-Write a program to make a simple calculator using switch-case. The calculator takes the operation (+ or – or * or /) and takes the two input arguments and print the results


   printf("Simple Calculator program\n*********************************\n ");
   int num1,num2;
   char choice;
   printf("\nEnter the first number : ");
   scanf("%d",&num1);
   printf("\nEnter the second number : ");
   scanf("%d",&num2);
   printf("\nMenu of simple calculations\n*********************************\n");
   printf("1- To Add Enter number (+)\n2- To Subtract Enter number (-)\n3- To Multiply Enter number (*)\n4- To Divide Enter number (/)");
    printf("\n*********************************\nEnter your choice ");
    scanf(" %c",&choice);



    switch(choice){

    case '+':
    printf("\n\nThe Sum of two numbers is : %d\n",num1+num2);
    break;
    case '-':
    printf("\n\nThe subtraction of two numbers is : %d\n",num1-num2);
    break;
    case '*':
    printf("\n\nThe Multiplication  of two numbers is : %d\n",num1*num2);
    break;
    case '/':
    printf("\nThe Division  of two numbers is : %.2f\n",((num1*1.0)/num2));
    break;

    default:
        printf("\nInvalid Choice\n");

    }




}
