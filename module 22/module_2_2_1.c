/*	Write a C program that takes the marks of a student as input and displays the corresponding grade based on the following conditions: 
	o Marks > 90: Grade A 
	o Marks > 75 and <= 90: Grade B 
	o Marks > 50 and <= 75: Grade C 
	o Marks <= 50: Grade D 
	• Use if-else or switch statements for the decision-making process.
Ans. */
 
#include <stdio.h>
main() 
{
    int marks;

    printf("\n\n\t Enter the marks of the student: ");
    scanf("%d", &marks);

    if (marks > 90) 
	{
        printf("\n\n\t Grade A\n");
    } 
	else if (marks > 75 && marks <= 90) 
	{
    	printf("\n\n\t Grade B\n");
    } 
	else if (marks > 50 && marks <= 75) 
	{
    	printf("\n\n\t Grade C\n");
    } 
	else if (marks<=50) 
	{
        printf("\n\n\t Grade D\n");
    } 
	else 
	{
        printf("\n\n\t Invalid input.\n");
    }
}

