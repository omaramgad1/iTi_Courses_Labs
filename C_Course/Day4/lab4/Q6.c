
#define SIZE 100

//6) C Program to Copy String Without Using strcpy()
void string_copy(char *s1 ,char * s2){
int i;
for ( i=0; s2[i]!='\0';i++){

    s1[i]=s2[i];
}
s1[i]='\0';
}

void Question_6(){








// Q6
char first[SIZE] , last[SIZE];

printf("Enter first name :");

gets(first);

//printf("Enter last name :");

//printf("the size : %d", size_string(first));
/*
gets(last);
string_copy(first,last);

printf("\n%s",first);
*/



}
