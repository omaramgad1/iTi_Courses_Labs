#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>


// Definitions
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
////////////////
#define ENTER 13
#define SPACE 32
#define SIZE 100
///////////////////


/*


9) Highlight Menu: New Colored Menu "with Arrows"


*/



void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd     color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}


void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void Enter_intger_numbers(int * num1 , int * num2){

    gotoxy(0,3);
    printf("\tEnter the first Number: ");
    scanf("%d",num1);
    gotoxy(0,5);
    printf("\tEnter the second Number: ");
    scanf("%d",num2);


}

void Enter_float_numbers(float * num1 , float * num2){

    gotoxy(0,3);
    printf("\tEnter the first Number: ");
    scanf("%f",num1);
    gotoxy(0,5);
    printf("\tEnter the second Number: ");
    scanf("%f",num2);
}


int extended(char c){
 if(c==-32){

 c=getch();

     }
 return (int)c;

}


int menu( char title[], char options[SIZE][SIZE] , int n)
{
   int selected_option = 1;
   char key;
   int button;
   int rep = 1;

   do {

      system("cls");
      //system("color 1e");
      hidecursor();


//line detector
        gotoxy(35, 10);
        SetColor(3);
        printf("Line Number : %d",selected_option);


// Show menu options
      for (int i = 0; i < n; i++) {
        gotoxy(40, 4 + i);
        SetColor(15);
        printf("%d) %s " , i+1, options[i]);
      }


// selector
        gotoxy(35, 3 + selected_option );
        SetColor(3);
        printf("==>");

// set color for selected option
        gotoxy(40, 4+selected_option-1 );
        SetColor(3);
        printf("%d) %s " ,selected_option , options[selected_option-1]);

// show menu title
      gotoxy(45, 2);
      SetColor(15);
      printf("%s",title);


// key detector
      do {
         key=getch();
         button = extended(key);

      } while ( button != UP && button != DOWN && button != LEFT && button != RIGHT && button != SPACE && button != ENTER);


      switch (button) {

// up & Right
        case UP:
        case RIGHT:

            selected_option--;

            if ( selected_option < 1) {
               selected_option = n;
            }
        break;

// down & left
        case DOWN:
        case LEFT:
            selected_option ++;

            if ( selected_option > n) {
               selected_option = 1;
            }
            break;

// Enter & Space
         case ENTER:
         case SPACE:
            rep = 0;
            break;
      }

   } while (rep);

   return selected_option ;
}


void sum_menu(){

int num1,num2;
float numf1,numf2;

int option , rep=1;

do{


system("cls");
char title[] = "Sum Menu";
char options[SIZE][SIZE]={"sum of two integer numbers","sum of two float  numbers","back"};
int n=3;

option = menu(title,options,n);

switch(option){

case 1:
    system("cls");
    Enter_intger_numbers(&num1,&num2);
    printf("\n\tThe Result is : %d",num1+num2);
    printf("\n\n");
    system("pause");

    break;

case 2:
    system("cls");
    Enter_float_numbers(&numf1,&numf2);
    printf("\n\tThe Result is : %.2f",numf1+numf2);
    printf("\n\n");
    system("pause");
    break;

case 3:

    rep=0;
    break;
}

}while(rep);


}


void subtract_menu(){

int num1,num2;
float numf1,numf2;

int option , rep=1;

do{


system("cls");
char title[] = "Subtract Menu";
char options[SIZE][SIZE]={"subtract of two integer numbers","subtract of two float  numbers","back"};
int n=3;

option = menu(title,options,n);



switch(option){

case 1:
    system("cls");
    Enter_intger_numbers(&num1,&num2);
    printf("\n\tThe Result is : %d",num1-num2);
    printf("\n\n");
    system("pause");
    break;

case 2:
    system("cls");
    Enter_float_numbers(&numf1,&numf2);
    printf("\n\tThe Result is : %.2f",numf1-numf2);
    printf("\n\n");
    system("pause");
    break;

case 3:

    rep=0;
    break;
}

}while(rep);

}



void division_menu(){

int num1,num2;
float numf1,numf2;


int option , rep=1;

do{


system("cls");


char title[] = "Division Menu";
char options[SIZE][SIZE]={"Division of two integer numbers","Division of two float numbers","back"};
int n=3;

option = menu(title,options,n);

switch(option){

case 1:
    system("cls");
    Enter_intger_numbers(&num1,&num2);
    printf("\n\tThe Result is : %d",num1/num2);
    printf("\n\n");
    system("pause");
    break;

case 2:
    system("cls");
    Enter_float_numbers(&numf1,&numf2);
    printf("\n\tThe Result is : %.2f",numf1/numf2);
    printf("\n\n");
    system("pause");
    break;

case 3:

    rep=0;
    break;
}

}while(rep);


}


void multiply_menu(){


int num1,num2;
float numf1,numf2;

int option , rep=1;


do{


system("cls");
char title[] = "Multiplication Menu";
char options[SIZE][SIZE]={"Multiplication of two integer numbers","Multiplication of two float numbers","back"};
int n=3;

option = menu(title,options,n);

switch(option){

case 1:
    system("cls");
    Enter_intger_numbers(&num1,&num2);
    printf("\n\tThe Result is : %d",num1*num2);
    printf("\n\n");
    system("pause");
    break;

case 2:
    system("cls");
    Enter_float_numbers(&numf1,&numf2);
    printf("\n\tThe Result is : %.2f",numf1*numf2);
    printf("\n\n");
    system("pause");
    break;

case 3:

    rep=0;
    break;
}

}while(rep);



}


void main_menu(){

int option , rep=1;

do{


char title[] = "Simple Calculator";
char options[SIZE][SIZE]={"Sum","Subtract","Multiply","Division","Exit"};
int n=5;

option = menu(title,options,n);

switch(option){

case 1:
    sum_menu();
    break;
case 2:
    subtract_menu();
    break;
case 3:
    multiply_menu();
    break;
case 4:
    division_menu();
    break;
case 5:
    system("cls");
    gotoxy(40,3);
    printf("SEE YOU SOON :)\n");
    rep=0;
    break;

}

}while(rep);



}



void Question_9()
{


main_menu();


}


