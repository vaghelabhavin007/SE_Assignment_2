/*	Write a C program that takes an integer input from the user and prints its multiplication table using a for loop. 
	Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).
Ans. */
 
#include <stdio.h>
int main() 
{
    int num, i, range;

    printf("\n\n\t Enter an integer number: ");
    scanf("%d", &num);

    printf("\n\n\t Enter the range for the multiplication table: ");
	scanf("%d", &range);

	printf("\n\n\t Multiplication table for %d:\n", num);
    for (i=1;i<=range;i++) 
	{
        printf("\n\n\t %d x %d = %d", num, i, num * i);
    }
}

