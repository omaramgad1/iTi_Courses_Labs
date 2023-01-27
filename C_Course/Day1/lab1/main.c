#include <stdio.h>
#include <stdlib.h>

int main() {
    // Q1
   // printf("Hello world");


    // Q2
/*
    char x;
    scanf(" %c",&x);

    printf("%d",x);

   /*
   // Q3
   float x;
   scanf("%f",&x);

   printf("the number is : %.2f",x );
   */


   /*
   // Q4
   int x,y;
   printf("Enter the first Number : ");
   scanf("%d",&x);
    printf("/nEnter the second Number : ");
   scanf("%d",&y);
   printf("the sum of two numbers is : %d",x+y);

   */
   /*
   // Q5

   int x;
   scanf("%d",&x);
   printf("%x",x);

   */



   // Q6
   printf("Simple Calculator program\n*********************************\n ");
   int num1,num2, choice;
   printf("\nEnter the first number : ");
   scanf("%d",&num1);
   printf("\nEnter the second number : ");
   scanf("%d",&num2);
   printf("\nMenu of simple calculations\n*********************************\n");
   printf("1- To Add Enter number (1)\n2- To Subtract Enter number (2)\n3- To Multiply Enter number (3)\n4- To Divide Enter number (4)");
    printf("\n*********************************\nEnter your choice ");
    scanf("%d",&choice);



    switch(choice){

    case 1:
    printf("\n\nThe Sum of two numbers is : %d\n",num1+num2);
    break;
    case 2:
    printf("\n\nThe subtraction of two numbers is : %d\n",num1-num2);
    break;
    case 3:
    printf("\n\nThe Multiplication  of two numbers is : %d\n",num1*num2);
    break;
    case 4:
    printf("\nThe Division  of two numbers is : %.2f\n",((num1*1.0)/num2));
    break;

    default:
        printf("\nInvalid Choice\n");

    }
    return 0;
}
