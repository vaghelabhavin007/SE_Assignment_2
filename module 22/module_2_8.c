/*	8) LAB EXERCISE:
?	Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.
Ans. */

#include<stdio.h>
void factorial();
main()
	{
		factorial();	
	}
void factorial()
{
	int n, i, f=1;
	
	printf("\n\n\t enter the num of factorial=");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		f=f*i;
		printf(" \n\n\t number=%d factorial= %d",i,f);
	}
}

