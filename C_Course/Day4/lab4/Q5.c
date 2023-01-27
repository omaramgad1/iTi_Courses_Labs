#define SIZE 100

//5) C Program to Find the Frequency of Characters in a String
int freq_string(char *s , char c){

int freq = 0 , i=0;

/*
// covert to lower case
   for(i=0;s[i]!='\0';i++){
      if(s[i]>=65&&s[i]<=90){
         s[i]=s[i]+32;
      }
   }
*/

while (s[i]!='\0')
{
   if(s[i]==c)
    freq++;
  i++;
}

return freq;
}


void Question_5(){


// Q5
char str[SIZE];

printf("Enter string :");

gets(str);

char c;

printf("\nEnter the char :");
scanf(" %c",&c);

printf("\nfreq = %d",freq_string(str,c));








}
