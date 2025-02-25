/*	Write a C program that counts the number of words in a sentence entered by the user.
	Challenge: Modify the program to find the longest word in the sentence.
Ans. */

#include<stdio.h>
main()
{
	char str[10];
	int i, count=0;
	
		printf("\n\n\t Enter any string : ");
		scanf("%s",&str);

	for(i=0; str[i]!='\0'; i++)
	{
		printf(" %c", str[i]);
		count++;	
	}	
	
	printf("\n\n\t Length of given string : %d", count);
}


