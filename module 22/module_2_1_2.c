/*	Write a C program that takes an integer from the user and checks the following using different operators: 
	o Whether the number is even or odd. 
	o Whether the number is positive, negative, or zero. 
	o Whether the number is a multiple of both 3 and 5.
Ans. */

#include <stdio.h>
main() 
{
    int num;

    printf("\n\n\t Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
    {
        printf("\n\n\t The number %d is even.\n", num);
    }
    else
    {
        printf("\n\n\t The number %d is odd.\n", num);
    }

    if (num > 0) 
    {
        printf("\n\n\t The number %d is positive.\n", num);
     } 
     else if (num < 0) 
     {
        printf("\n\n\t The number %d is negative.\n", num);
    } 
     else 
    {
        printf("\n\n\t The number is zero.\n");
    }

    if (num % 3 == 0 && num % 5 == 0) 
    {
        printf("\n\n\t The number %d is a multiple of both 3 and 5.\n", num);
    } 
    else 
    {
        printf("\n\n\t The number %d is not a multiple of both 3 and 5.\n", num);
    }
}

