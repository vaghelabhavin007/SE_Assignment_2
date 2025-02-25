/*	Write a C program that takes a number as input and checks whether it is a palindrome using a function.
	Challenge: Modify the program to check if a given string is a palindrome.
Ans. */

#include <stdio.h>

int isPalindrome(int num) 
{
    int originalNum = num;
    int reversedNum = 0, remainder;

    while (num != 0) 
	{
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) 
	{
        return 1;
    } else 
	{
        return 0;
    }
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) 
	{
        printf("%d is a palindrome.\n", num);
    } else 
	{
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

