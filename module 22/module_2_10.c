/*	LAB EXERCISE:
?	Write a C program to demonstrate pointer usage. 
	Use a pointer to modify the value of a variable and print the result.
Ans. */

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; 

    ptr = &num;

    printf("\n\n\t Original value of num: %d\n", num);

    *ptr = 20;

    printf("\n\n\t Modified value of num using pointer: %d\n", num);
}

