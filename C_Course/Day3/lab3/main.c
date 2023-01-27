#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lab3.h"
#define SIZE 100


//9- C Program to count number of Alphabets & number of words in a sentence. (word count)
int check_alpha(char c){

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // or if(((int)c >= 97 && c <= 122 )|| ((int)c>= 65 && c <= 90))
       return 1;
    else
       return 0;

        }

int count_alpha (char *s)
{

int count=0 , i=0;


while(s[i]!='\0')
{
  if(check_alpha(s[i]))
    count++;

    i++;
}

return  count;
}

int word_count(char *s){

int count=0,i=0;

while(s[i]!='\0'){


    if(s[i] ==' ' && s[i+1]!=' ')
        count++;
    i++;

}
return count+1;
}







int main()
{



char *ptr;

printf("Enter string :");
gets(&ptr);

printf("\nthe string is : %s",&ptr);

/*
char str[SIZE];
printf("Enter string :");
gets(str);
printf("Number of Alphabets : %d",count_alpha(str));

printf("\nNumber of words : %d",word_count(str));

*/

//Question_1();
//Question_2();
//Question_3();
//Question_4();
//Question_5();
//Question_6();
//Question_7();
//Question_8();






    return 0;
}



