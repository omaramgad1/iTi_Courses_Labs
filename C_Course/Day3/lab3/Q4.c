
void max_number(int n1 , int n2 , int n3){
int max=n1;
if(max<=n2){
    max=n2;

    if(max<=n3){
        max=n3;
    }
}
printf("the max number : %d",max);
}


void Question_4(){

//4- Write a function takes 3 numbers as parameter, and returns the largest one among them... write a program to test it.

int x,y,z;
printf("Enter 1st number : ");
scanf("%d",&x);
printf("Enter 2st number : ");
scanf("%d",&y);
printf("Enter 3st number : ");
scanf("%d",&z);
max_number(x,y,z);


}


