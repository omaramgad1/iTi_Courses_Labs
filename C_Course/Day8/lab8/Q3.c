/* 3. C Program to calculate sum of student degrees, and average of each subject, asks the user for
	students and subject numbers. (Dynamic Allocation of 2D Array - Pointer to Pointer)
*/

void Question_3(){



int rows, cols , i ,j;
printf("Enter Numbers of students :");

scanf("%d",&rows);

printf("\nEnter Numbers of Subjects:");

scanf("%d",&cols);
int **ptr =(int ** )malloc(rows * sizeof(int *));

for(i=0;i<rows;i++){
                ptr[i]=(int *)malloc(cols * sizeof(int));
            }

for(i=0;i<rows;i++){

            printf("\n\t\tEnter Grades of Student NO. %d ",i+1);
            for(j=0;j<cols;j++){
                printf("\nthe grade of Subject NO. %d :",j+1);
                scanf("%d",&ptr[i][j]);
            }
}

int sum,avg;


for(i=0;i<rows;i++){
    sum=0, avg=0;
    for(j=0;j<cols;j++){

        sum+=ptr[i][j];

    }
    printf("\nthe Sum grades of Student NO. %d = %d ",i,sum);
    printf("\nthe avg grades of Student NO. %d = %d",i,sum/cols);
    printf("\n----------------\n");
}




}
