//3) C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.
int extended_or_not(char c){
 if(c==-32){

 c=getch();
 printf("extended key : %d " ,c);
 }
 else{
  printf("not extended: %d",c);

 }
}

void Question_3(){

//3) C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.


char x;
x=getch();
extended_or_not(x);



}
