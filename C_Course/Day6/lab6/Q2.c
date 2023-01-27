
 //2) Recursive: Power.

int power(int  x , int n){

if(n==1){
    return x;
}
else{

    return  x* power(x,n-1);

}
}



 void Question_2(){



//2) Recursive: Power.

    int x,p;
    printf("Enter Number: ");
    scanf("%d",&x);
    printf("Enter power : ");
    scanf("%d",&p);
   printf("%d power of %d : %d",x,p, power(x,p));


 }
