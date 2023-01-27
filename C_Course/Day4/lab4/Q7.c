#define SIZE 100

//7) C Program to Find the Length of a String without Using strlen()
int size_string(char s[]){

int i=0;
int count=0;
while(s[i]!='\0'){
    i++;
    count++;

}
return count;
}

void Question_7(){




char str[SIZE];

printf("Enter string :");

gets(str);

printf("The Length of string : %d",size_string(str));

}
