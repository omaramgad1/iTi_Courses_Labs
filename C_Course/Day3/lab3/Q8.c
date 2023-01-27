    void Multiplication_Table(int x){
    for(int i = 1 ; i<=12;i++){

        printf("\n%d * %d = %d",i,x,x*i);


    }
    }




void Question_8(){


    // 8- C Program to Generate Multiplication Table "1*3=3, 2*3=6, ..."

int x ;


printf("Enter number : ");
scanf("%d",&x);
Multiplication_Table(x);
}



