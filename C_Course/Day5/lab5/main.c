#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

#include <windows.h>


// Definitions
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

#define ENTER 13
#define SPACE 32

#define SIZE 100
///////////////////


typedef struct Emp_Struct{

int id;
int salary;
int Bonus;
int Deduction;
char Name[100];

} Employee;

// Employee Database
Employee Database[SIZE];
int size_arr=0;




Employee AddNewEmployee(){

Employee e;
printf("Enter Employee's ID : ");
scanf("%d",&e.id);

printf("\nEnter Employee's Name : ");
fflush(stdin);

gets(e.Name);

printf("\nEnter Employee's Salary : ");
scanf("%d",&e.salary);
if(e.salary<=0)
    e.salary=0;

printf("\nEnter Employee's Bonus : ");
scanf("%d",&e.Bonus);

if(e.Bonus<=0)
    e.Bonus=0;


printf("\nEnter Employee's Deduction : ");
scanf("%d",&e.Deduction);

if(e.Deduction<=0)
e.Deduction=0;
printf("\n-------------------------\n");


return e;
}


void AddEmployee(Employee *e){

printf("Enter Employee's ID : ");
scanf("%d",&e->id);

printf("\nEnter Employee's Name : ");
fflush(stdin);

gets(e->Name);

printf("\nEnter Employee's Salary : ");
scanf("%d",&e->salary);
if(e->salary<=0)
    e->salary=0;

printf("\nEnter Employee's Bonus : ");
scanf("%d",&e->Bonus);

if(e->Bonus<=0)
    e->Bonus=0;


printf("\nEnter Employee's Deduction : ");
scanf("%d",&e->Deduction);

if(e->Deduction<=0)
e->Deduction=0;
}


void DisplayEmployee(Employee *e){
printf("-------------------------");
printf("\nEmployee's ID : %d",e->id);
printf("\nEnter Employee's Name : %s",e->Name);
printf("\nEmployee's Salary : %d",e->salary);
printf("\nEmployee's Bonus : %d",e->Bonus);
printf("\nEmployee's Deduction : %d",e->Deduction);
printf("\n-------------------------\n");

}

void Display_Emp_netsalary(Employee *e){

printf("\nEmployee's ID : %d",e->id);
printf("\nEnter Employee's Name : %s",e->Name);
printf("\nEmployee's Net Salary : %d",e->salary+e->Bonus-e->Deduction);

}



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



void main_menu(){

int option , rep=1;

do{


char title[] = "EMPLOYEES' SYSTEM";
char options[SIZE][SIZE]={"ADD NEW EMPLOYEE","DISPLAY ALL EMPLOYEES","EXIT"};
int n=3;

option = menu(title,options,n);

switch(option){

case 1:
    system("cls");
    Database[size_arr]=AddNewEmployee();
    size_arr++;
    printf("\n\n");
    system("pause");
    break;
case 2:
    system("cls");

    for(int i=0;i<size_arr;i++){
    DisplayEmployee(&Database[i]);

    }

    system("pause");
    break;
case 3:
    system("cls");
    gotoxy(40,3);
    printf("SEE YOU SOON :)\n");
    rep=0;
    break;

}

}while(rep);



}









int main()
{


/*
//1- C Program to take single Employee's information(ID, Name, Salary, Bonus, Deduction), and display his code, name along with his net salary. (Emp_Struct)

Employee e;

AddEmployee(&e);

DisplayEmployee(&e);


*/

/*
//2- C Program to take information of Array of 5 Employees, then display their data. (EmpArr_of_Struct)

    Employee arr_e[2];

    for(int i=0 ; i<2 ; i++){
        AddEmployee(&arr_e[i]);
        printf("\n-------------------------\n");

    }
    for(int i=0 ; i<2 ; i++){
        DisplayEmployee(&arr_e[i]);
        printf("\n-------------------------\n");

    }
*/


/*
//3- Employee with Functions (try to divide Ass#2 into 2 functions): struct Employee AddNewEmployee(); void DisplayEmployee(struct Employee);

    e=AddNewEmployee();
    DisplayEmployee(&e);
*/


//4- Employee with functions and Highlight Menu: Menu of Array_Of_Struct

    main_menu();



    return 0;
}
