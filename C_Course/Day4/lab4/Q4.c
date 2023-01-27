
#define SIZE 100


// 4) C Program to take firstName and lastName from user, then displays fullName.
char * concat(char *s1 ,char *s2 ){

int s_s1=size_string(s1),s_s2=size_string(s2);

// to make white space between two string


s1[s_s1]=' ';
s_s1+=1;


for( int i=0; s2[i]!= '\0' ;i++){
    s1[s_s1+i]=s2[i];

}
s1[s_s1+s_s2]='\0';

return s1;
}

void Question_4(){


// 4) C Program to take firstName and lastName from user, then displays fullName.

char first[SIZE] , last[SIZE];

printf("Enter first name :");

gets(first);

printf("Enter last name :");

gets(last);

int *full=concat(first,last);

printf("\n%s",full);



}
