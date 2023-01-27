#define SIZE 100

//8) C Program to Remove all Characters in a String Except Alphabet
int check_alpha(char c){

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // or if(((int)c >= 97 && c <= 122 )|| ((int)c>= 65 && c <= 90))
        return 1;
    else
        return 0;
}

char * remove_except_alpha(char *s){

static char temp[SIZE]={'\0'};
//char *p = temp;
int i=0 ,j=0;

while(s[i]!='\0'){

    if(check_alpha(s[i])){
        temp[j]=s[i];
        //printf("\n%s",temp);
        j++;
    }
    i++;
}
//return p;

return temp;
}



void Question_8(){


// Q8
char str[SIZE];

printf("Enter string :");

gets(str);

char *f=remove_except_alpha(str);
printf("\n%s",f);




}
