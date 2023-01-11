//Calculating Mean of five numbers as grades

#include <stdio.h>

int main ()

{
    int gradeA, gradeB, gradeC, gradeD, gradeE, gradeTotal;   //variables are stated for the following inputs

    printf("Please input five number for grades: ");   //prompt for five numerical grades
    scanf("%d",&gradeA);   //stores each number entered into specific memory
    scanf("%d",&gradeB);
    scanf("%d",&gradeC);
    scanf("%d",&gradeD);
    scanf("%d",&gradeE);

    gradeTotal=gradeA+gradeB+gradeC+gradeD+gradeE;   //calculates the total grade of the five numbers

    int meanGrade;   //variable meanGrade is stated
    meanGrade = (gradeTotal)/5;   //calculations for mean grade

	printf("Your average is: %d\n", meanGrade);   //output statement with the mean grade
	
    if (meanGrade >= 75)   //if statement reads value is greater than 75
    {
        printf("You passed the class!");   //prompt for TRUE if statement
    }
    else {
	    printf("Failed\n");   //else prompt when if statement is FALSE
	    printf("Sorry, you have to repeat the course");   //prompt after inital else statement
	
    return 0;
	}
}
