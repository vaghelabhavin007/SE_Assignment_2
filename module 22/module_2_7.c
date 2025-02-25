/*	7) LAB EXERCISE:
?	Write a C program that uses the break statement to stop printing numbers when it reaches 5. 
	Modify the program to skip printing the number 3 using the continue statement.
Ans. */
#include <stdio.h>
main() 
{
	int i=1;
    	
	for (i = 1; i <= 10; i++) 
	{
        if (i == 3) 
	{
        continue;  
    }

    // Break the loop when I reach 5
    if (i == 5) 
	{
        break;  
    }
        printf("%d ", i);
    	}
    	printf("\nLoop ended.\n");
}

