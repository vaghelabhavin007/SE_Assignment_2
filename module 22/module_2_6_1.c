/*	Write a C program that takes a string as input and reverses it using a function.
	Challenge: Write the program without using built-in string handling functions.
Ans. */

#include <stdio.h>
void reverseString(char str[]) 
{
    int start = 0, end = 0;
    char temp;

    while (str[end] != '\0') 
	{
        end++;
    }
    	end--;

    while (start < end) 
	{
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() 
{
    char str[100];

    printf("\n\n\t Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    int i = 0;
    while (str[i] != '\0') 
	{
        if (str[i] == '\n') 
		{
            str[i] = '\0';
            break;
        }
        	i++;
    }
    	reverseString(str);
    
    	printf("\n\n\t Reversed string: %s\n", str);
   		return 0;
}

