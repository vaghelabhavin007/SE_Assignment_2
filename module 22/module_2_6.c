/*	6) LAB EXERCISE:
?	Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while).
Ans. */

#include <stdio.h>
int main() 
{
    // using for a while
    int i1=1, i2=1;
    
    printf("\n\n\t Using while loop:\n");
    while (i1 <= 10) 
	{
        printf(" %d ", i1);
        i1++;
    }
    	printf("\n");

    // Using for loop
    printf("\n\n\t Using for loop:\n");
    for (int i2 = 1; i2 <= 10; i2++) 
	{
        printf(" %d ", i2);
    }
    	printf("\n");

    // Using a do-while loop
    printf("\n\n\t Using do-while loop:\n");
    int j = 1;
    do 
	{
    	printf(" %d ", j);
        j++;
    } while (j <= 10);
    	printf("\n");

}

