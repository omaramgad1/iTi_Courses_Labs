

void to_upper(char c){
 if ((int)c >= 97 && c <= 122  ) {
  printf("the upper case of %c is : %c",c,((char)((int)c)-32));

  }
  else{
    printf("%c is not alphabet. ", c);
  }
}



void Question_6(){

 //  6- Write C Function that converts the any letter from lowercase to uppercase.

    char c;
    printf("Enter a letter in lower case: ");
    scanf(" %c",&c);
    to_upper(c);

}
