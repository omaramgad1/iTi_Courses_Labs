


void Question_4(){
//4- Write a program that reads a student grade percentage and prints "Excellent" if his grade is greater than or equal 85, "Very Good" for 75 or greater;"Good" for 65, "Pass" for 50,"Fail" for less than 50


int x ;
    printf("Enter your Grade:");
    scanf("%d",&x);
    if(x>=85 && x<=100)
        printf("Excellent");
    else if(x>=75 && x<85)
        printf("Very Good");
    else if(x>=65 && x <75)
        printf("Good");
    else if(x>=50&& x <65)
        printf("pass");
    else if(x>=0&& x <50)
        printf("Fail");
}
