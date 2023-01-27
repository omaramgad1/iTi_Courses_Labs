/*
5. Try to implement --jagged array-- on Assinment No.4 , which means:
 each student may have number of subjects different than the other.

*/
void Question_5(){


int rows, cols , i ,j;
printf("Enter Number of student :");

scanf("%d",&rows);

int **ptr =(int ** )malloc(rows * sizeof(int *));

int *s=(int *)malloc(rows * sizeof(int));

 for(i=0;i<rows;i++){


        printf("\nEnter Number of Subject for Student no. %d: ",i+1);
        scanf("%d",&cols);
        s[i]=cols;
        ptr[i]=(int *)malloc(cols * sizeof(int));
    }



for(i=0;i<rows;i++){

    printf("\n\t\tEnter Grades of Student NO. %d ",i+1);
    for( j=0 ; j < s[i] ; j++ ){
        printf("\nthe grade of Subject NO. %d :",j+1);
        scanf("%d",&ptr[i][j]);
    }
}
system("cls");

for(i=0;i<rows;i++){
    printf("\n\t\Grades of Student NO. %d ",i+1);
    for(j=0 ; j<s[i] ;j++){
        printf("\nthe grade of Subject NO. %d: %d",j+1,ptr[i][j]);

    }
        printf("\n----------------\n");

}






}
