void Question_2(){
// 2- Simple Menu with 3 choices.

   int num1,num2;

   char choice ;

   int flag = 1;


   while(flag){

   printf("\nSimple Calculator program\n*********************************\n ");
   printf("\nEnter the first number : ");
   scanf("%d",&num1);
   printf("\nEnter the second number : ");
   scanf("%d",&num2);
   printf("\nMenu of simple calculations\n*********************************\n");
   printf("1- To Add Enter number (+)\n2- To Subtract Enter number (-)\n3- To Multiply Enter number (*)\n4- To Divide Enter number (/)");
   printf("\n*********************************\nEnter your choice: ");
   scanf(" %c",&choice);

    system("cls");


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


  printf("\n*********************************\n");

  printf("1-to Return to the menu and take another calculation press (1) \n2-Exit press (0)\n");
  printf("Enter your choice:");

  scanf("%d",&flag);

  if(flag!= 0 && flag!= 1){
        printf("\nInvalid Choice\n");
        printf("Enter your choice:");
        scanf("%d",&flag);
  }
 system("cls");
}
}
