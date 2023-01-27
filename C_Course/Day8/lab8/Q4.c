
#include <stdio.h>
#include <stdlib.h>

#include<conio.h>
#include <windows.h>
// Definitions
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define HOME 71
#define END 79
#define SPACE 32
#define DELETE 83
#define BACKSPACE 8
#define ENTER 13

 /////////

void backspaceChar(char *str, int i ,int *len)
{
    for (; i < *len -1; i++)
    {
        str[i] = str[i+1];
    }

    *len=*len-1;
    str[i] = '\0';
}



void deleteChar(char *str, int i ,int *len)
{


    for (; i < (*len ); i++)
    {
        str[i] = str[i+1];
    }

    *len = *len-1;
    str[i] = '\0';
}



void display_string(char *str,int len ){




    system("cls");
    gotoxy(45,2);
    printf("Line Editor");
    gotoxy(43,3);
    printf("---------------");
    gotoxy(37, 5);
    printf("==>");

    for ( int i=0;i<len;i++){

        gotoxy(40+i,5);
        printf("%c",str[i]);
    }

}

/*
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



*/



void Question_4(){

 int size_string;
    printf("Enter The length of your String :");
    scanf("%d",&size_string);
    char *string=(char *)malloc(size_string * sizeof(char));
////////////////////////////////////////////////////////////////////////////////////
    system("cls");
    gotoxy(45,2);
    printf("Line Editor");
    gotoxy(43,3);
    printf("---------------");
    gotoxy(37, 5);
    printf("==>");
////////////////////////////////////////////////////////////////////////////////////
    int pos=0;
    int flag = 1;
    int len=0;
    int row = 40 ;
    gotoxy(row , 5);
////////////////////////////////////////////////////////////////////////////////////
    char key;
    int button;

////////////////////////////////////////////////////////////////////////////////////
    do {

        key=getch();
        button = extended(key);

        switch(button){

////////////////////////////////////////////////////////////////////////////////////
                    case UP :
                    case RIGHT:
                            if(row<40+len){
                                        row++;
                                        pos++;
                            }

                            gotoxy(row,5);
                    break;
////////////////////////////////////////////////////////////////////////////////////
                    case DOWN :
                    case LEFT :

                            if(row >40){
                                        row--;
                                        pos--;
                            }
                            gotoxy(row,5);
                        break;
////////////////////////////////////////////////////////////////////////////////////
                    case HOME:
                            row=40;
                            pos=0;
                            gotoxy(row,5);
                        break;
////////////////////////////////////////////////////////////////////////////////////
                    case END:
                            pos=len;
                            row=40+len;
                            gotoxy(row,5);
                        break;
////////////////////////////////////////////////////////////////////////////////////
                    case BACKSPACE:

                                if(row > 40 ){
                                            backspaceChar(string,pos,&len);
                                            pos--;
                                            row--;


                                }


                                display_string(string,len);
                                gotoxy(row,5);
                        break;
////////////////////////////////////////////////////////////////////////////////////
                    case DELETE:

                            if(row >=40 && pos!=len ){
                                        deleteChar(string,pos+1,&len);
                                        if(row!=40){

                                                pos--;
                                                row--;
                                                display_string(string,len);
                                                gotoxy(row+1,5);
                                            }
                                        else{


                                        display_string(string,len);
                                        gotoxy(row,5);
                                        }

                                }

                            else if(row >40 && pos==len ){

                                        deleteChar(string,pos,&len);
                                        pos--;
                                        row--;
                                        display_string(string,len);
                                        gotoxy(row,5);

                            }


                        break;
////////////////////////////////////////////////////////////////////////////////////
                    case ENTER :
                            string[len]='\0';
                            gotoxy(35,7);
                            printf("the string is : %s \n",string);
                            flag=0;
                        break;
////////////////////////////////////////////////////////////////////////////////////
                    default:
                            if(pos<size_string ){

                                        string[pos]=key;
                                        printf("%c",string[pos]);

                                        len++;
                                        pos++;
                                        row++;


                            }
                            gotoxy(row,5);
                        break;

        }

    }while(flag);






}
