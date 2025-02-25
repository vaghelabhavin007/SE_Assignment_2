/*	Write a C program that takes three numbers from the user and determines: 
	o The largest number. 
	o The smallest number. 
	Challenge: Solve the problem using both if-else and switch-case statements.
Ans. */

#include <stdio.h>

main() 
{
    int num1, num2, num3;

    printf("\n\n\t Enter first numbers: ");
    scanf("%d", &num1);
    printf("\n\n\t Enter second numbers: ");
    scanf("%d", &num2);
    printf("\n\n\t Enter three numbers: ");
    scanf("%d", &num3);

    int largest, smallest;

    if (num1 >= num2 && num1 >= num3) 
	{
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) 
	{
        largest = num2;
    } else 
	{
        largest = num3;
    }

    if (num1 <= num2 && num1 <= num3) 
	{
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) 
	{
        smallest = num2;
    } else 
	{
        smallest = num3;
    }

    printf("\n\n\t Largest number: %d\n", largest);
    printf("\n\n\t Smallest number: %d\n", smallest);

    int largestnum;
    
    switch (num1 >= num2 && num1 >= num3) 
	{
        case 1:
            largestnum = num1;
            break;
        default:
            switch (num2 >= num1 && num2 >= num3) 
			{
                case 1:
                    largestnum = num2;
                    break;
                default:
                    largestnum = num3;
            }
    }

    int smallestnum;
    switch (num1 <= num2 && num1 <= num3) 
	{
        case 1:
            smallestnum = num1;
            break;
        default:
            switch (num2 <= num1 && num2 <= num3) 
			{
                case 1:
                    smallestnum = num2;
                    break;
                default:
                    smallestnum = num3;
            }
    }
    
    printf("\n\n\t Largest number (switch-case): %d\n", largestnum);
    printf("\n\n\t Smallest number (switch-case): %d\n", smallestnum);

}


