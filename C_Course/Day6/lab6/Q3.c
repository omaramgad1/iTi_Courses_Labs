#include <stdio.h>
#include <stdlib.h>
#define SIZE 2

/*
Write a program to structure to store
the name, account number and balance of customers and store their information.
1 -Write a function to print the names of all the customers having balance less than $200.
2-Write a function to add $100 in the balance of all the customers having more than $1000 in their balance
and then print the incremented value of their balance.
*/

typedef struct customer{
int account_num;
int balance;
char name[20];
}Customer;

void AddCustomer(Customer *c){

printf("Enter Customer's Account Number : ");
scanf("%d",&c->account_num);

printf("\nEnter Customer's Name : ");
fflush(stdin);

gets(c->name);

printf("\nEnter Customer's balance : ");
scanf("%d",&c->balance);

}

void Display_CustNames_200(Customer *c ){

    printf("\n%s has %d",c->name ,c->balance );
}

void Add_bouns_Display(Customer *c ){

    c->balance=c->balance+100;
    printf("\n%s has balance after increment is : %d ",c->name,c->balance);

}

void Question_3(){


// task
Customer c[SIZE];

for(int i= 0; i<SIZE ; i++){
AddCustomer(&c[i]);
printf("\n**********************\n");
}

for(int i= 0; i<SIZE ; i++){
    if(c[i].balance < 200 ) {
    Display_CustNames_200(&c[i]);
    printf("\n**********************\n");
}
}


for(int i= 0; i<SIZE ; i++){
if(c[i].balance> 1000 ){
Add_bouns_Display(&c[i]);
printf("\n**********************\n");
}
}




}
