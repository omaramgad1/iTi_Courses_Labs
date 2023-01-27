#define SIZE 100

void Question_2(){




//2) Receive character by character and then place the string terminator upon pressing enter,then display the string.

char x='\0';
char string[SIZE];


int i=0;
while(i < SIZE && x != '\n')
{
    scanf("%c",&x);

    if(x!=' '){

        string[i]=x;

        i++;

        if(x =='\n')
            string[i-1]='\0';

        }

}

   printf("the String is : %s ",string);


}
