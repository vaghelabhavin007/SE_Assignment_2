/*	Write a C program that takes two strings from the user and concatenates them using strcat(). 
	Display the concatenated string and its length using strlen().
Ans. */
 
#include <stdio.h>
#include <string.h>
main()
 {
    char str1[100], str2[50];

    	printf("\n\n\t Enter the first string: ");
    	scanf("%s", str1);

    	printf("\n\n\t Enter the second string: ");
    	scanf("%s", str2);

    	strcat(str1, str2);

    	printf("\n\n\t Concatenated string: %s\n", str1);

    	printf("\n\n\t Length of the concatenated string: %lu\n",strlen(str1));
    		
}

