/*&	Write a C program that checks whether a given number is a prime number using a for loop. 
	Challenge: Modify the program to print all prime numbers between 1 and a given number.
Ans. */

#include <stdio.h>

main() 
{
    int num_1, i;

    printf("\n\n\t Enter a number: ");
    scanf("%d", &num_1);

    for (i = 2; i <= num_1/2; i++) 
	{
        if (num_1 % i == 0) 
		{
            printf("\n\n\t %d is not a prime number.\n", num_1);
            return 0;
        }
    }

    printf("\n\n\t %d is a prime number.\n", num_1);

	{
    	int num, i, j, Prime;

    	printf("\n\n\t Prime numbers between 1 and %d are:\n", num_1);

    	for (num = 2; num <=num_1; num++) 
		{	
        	Prime = 1;

        	for (i=2;i*i<=num;i++) 
		{
            if (num % i == 0) 
			{
                Prime = 0;
            }
        }

        if (Prime) 
			{
            	printf("\t %d", num);
        	}
    	}
    printf("\n");
	}
}

