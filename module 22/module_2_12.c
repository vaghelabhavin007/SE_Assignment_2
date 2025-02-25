/*	Write a C program that defines a structure to store a student's details (name, roll number, and marks). 
	Use an array of structures to store the details of 3 students and print them.
Ans. */

#include <stdio.h>
struct Student
	{
    	char name[50];
    	int roll_number;
    	float marks;
	};
int main() 
{
    struct Student students[3];

    for (int i = 0; i < 3; i++) 
	{
        printf("\n\n\t Enter details for student %d:\n", i + 1);
        
        printf("\n\n\t Name: ");
        scanf("%s", students[i].name); 

        printf("\n\n\t Roll number: ");
        scanf("%d", &students[i].roll_number);

        printf("\n\n\t Marks: ");
        scanf("%f", &students[i].marks);
    }

    	printf("\n\n\t Student Details:\n");
    	for (int i = 0; i < 3; i++) 
	{
        printf("\n\n\t Student %d:\n", i + 1);
        printf("\n\n\t Name: %s\n", students[i].name);
        printf("\n\n\t Roll number: %d\n", students[i].roll_number);
        printf("\n\n\t Marks: %.2f\n", students[i].marks);
    }
}

