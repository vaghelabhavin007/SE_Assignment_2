/*	Write a C program that checks whether a given number is an Armstrong number or not (e.g., 153 = 1^3 + 5^3 + 3^3).
	Challenge: Write a program to find all Armstrong numbers between 1 and 1000. 
Ans. */
 
#include <stdio.h>
#include <math.h>

int main() 
{
    int num=0, originalNum, remainder, sum=0, digits=0;
    printf("\n\n\t Armstrong numbers between 1 and 1000:\n");
    for (num = 1; num < 1000; num++) 
	{
        originalNum = num;
        sum = 0;
        digits = 0;

    while (originalNum != 0) 
	{
        originalNum /= 10;
        digits++;
    }

        originalNum = num;

    while (originalNum != 0) 
	{
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

    	if (sum == num) 
		{	
        	printf(" %d\n", num);
    	}
    }
    	return 0;
}

