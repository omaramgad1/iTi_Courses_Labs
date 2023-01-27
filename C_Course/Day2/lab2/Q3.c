


void Question_3(){
//3- C Program to Find the Largest Number Among Three Numbers


    int x ,y ,z;
    printf("Enter 1st Number :");
    scanf("%d",&x);
    printf("Enter 2nd Number :");
    scanf("%d",&y);
    printf("Enter 3rd Number :");
    scanf("%d",&z);
    printf("\n");
    if(x>=y&&x>=z)
        printf("the 1st number is the largest");
    else if(y>=x&&y>=z)
        printf("the 2st number is the largest");
    else
        printf("the 3rd number is the largest");
}
