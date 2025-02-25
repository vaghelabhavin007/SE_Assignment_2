/*	4) LAB EXERCISE:
?	Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. 
	Display the results.
Ans. */
#include <stdio.h>
int main() 
{
    int a, b;

    printf("\n\n\t Enter first integers: ");
    scanf("%d", &a);
    printf("\n\n\t Enter second integers: ");
    scanf("%d", &b);

    // Arithmetic Operations
    printf("\n\n\t Arithmetic Operations:\n");
    printf("\n\n\t %d + %d = %d\n", a, b, a + b);
    printf("\n\n\t %d - %d = %d\n", a, b, a - b);
    printf("\n\n\t %d * %d = %d\n", a, b, a * b);
    printf("\n\n\t %d / %d = %d\n", a, b, a / b);
    printf("\n\n\t %d %% %d = %d\n", a, b, a % b);

    // Relational Operations
    printf("\n\n\t Relational Operations:\n");
    printf("\n\n\t %d == %d= %d\n", a, b, a == b);
    printf("\n\n\t %d != %d= %d\n", a, b, a != b);
    printf("\n\n\t %d > %d= %d\n", a, b, a > b);
    printf("\n\n\t %d < %d= %d\n", a, b, a < b);

    // Logical Operations
    printf("\n\n\t Logical Operations:\n");
    printf("\n\n\t %d && %d= %d\n", a, b, a && b);
    printf("\n\n\t %d || %d= %d\n", a, b, a || b);

}

