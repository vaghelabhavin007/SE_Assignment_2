/*	Write a C program that generates Pascal’s Triangle up to N rows using loops.
	Challenge: Implement the same program using a recursive function.
Ans. */

#include <stdio.h>
void Triangle(int n) 
{
    for (int line = 0; line < n; line++) 
	{
        for (int space = 0; space < n - line - 1; space++) 
		{
            printf(" ");
        }

    int num = 1;
    for (int i = 0; i <= line; i++) 
	{
        printf("%d ", num);
        num = num * (line - i) / (i + 1);
    }
        printf("\n");
    }
}

int main() 
{
    int n;

    printf("\n\n\t Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    Triangle(n);
    return 0;
}

