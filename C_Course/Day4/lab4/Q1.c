//1) C Program to swap 2 integer values. (Swap function, calling by address)
void swaped(int *x ,int * y){
int temp;

temp= *x;
*x=*y;
*y=temp;

/*
*x = *x + *y;
*y = *x - *y;
*x-= *y;
*/
}


void swaped_1(int x ,int y){
int temp;
temp=x;
x=y;
y=temp;
}


void Question_1(){


//1) C Program to swap 2 integer values. (Swap function, calling by address)
int x,y;

printf("Enter num1 : ");

scanf("%d",&x);

printf("\nEnter num2 : ");

scanf("%d",&y);

swaped(&x,&y);


printf("\n\tAfter Swap");

printf("\nnum1 : %d",x);

printf("\nnum2 : %d",y);








}
