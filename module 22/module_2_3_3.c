/*	Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop.
	Challenge: Extend the program to reverse the digits of the number.
Ans. */
 
#include<stdio.h>
main()
{
	int n, rem, sum=0;
	
	printf("\n\n\t Enter any number to reverse : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10; 
		printf("\t%d", rem);
		sum=sum+rem;
		n=n/10;
	}
	printf("\n\n\t Sum of digits : %d", sum);
}

