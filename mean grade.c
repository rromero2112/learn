//Calculating Mean of five numbers as grades

#include <stdio.h>

int main ()

{
    int gradeA, gradeB, gradeC, gradeD, gradeE, gradeTotal;

    printf("Please input five number for grades: ");
    scanf("%d",&gradeA);
    scanf("%d",&gradeB);
    scanf("%d",&gradeC);
    scanf("%d",&gradeD);
    scanf("%d",&gradeE);

    gradeTotal=gradeA+gradeB+gradeC+gradeD+gradeE;

    int meanGrade;
    meanGrade = (gradeTotal)/5;

	printf("Your average is: %d\n", meanGrade);
	
    if (meanGrade > 75);
    {
        printf("You passed the class!");
    }

    return 0;
}

