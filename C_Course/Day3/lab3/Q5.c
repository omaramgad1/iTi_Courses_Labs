
void check_alpha_1(char c){

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // or if(((int)c >= 97 && c <= 122 )|| ((int)c>= 65 && c <= 90))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);
}




void Question_5(){
    //5- Write a C Function that takes one character and C.
   char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    check_alpha_1(c);




}
