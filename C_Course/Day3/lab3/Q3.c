#include<windows.h>
#include <time.h>
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}





void Question_3(){

//3- Magic Box.

int row = 1 , col, size ;

printf("Enter size cond.( Odd Number) : ");
scanf("%d",&size);

if(size%2!=0 && size > 1){


col=(size+1)/2;
for(int i=1 ; i<=(size*size);i++){

    gotoxy(col*5,row);
    delay(1);
    printf("%5d",i);
    if(i%size==0){

        row++;
    }

    else{
        row--;
        col--;
        if(row<=0){
            row=size;
        }

        if(col<=0){
            col=size;
        }



    }

}


}

else{

 printf("Even number");
}




}



















