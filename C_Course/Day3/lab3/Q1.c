void Question_1(){


 //1- Receive numbers from the user, and exit when the sum exceeds 100.

int num ,flag=1 , sum=0  ;

while(flag)
{
 printf("Enter number : ");
 scanf("%d",&num);
 sum+=num;

 if(sum>=100){
    flag=0;
 }
 printf("sum = %d\n\n",sum);

}






}
