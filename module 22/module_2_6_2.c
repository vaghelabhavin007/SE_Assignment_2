/*	Write a C program that takes a string from the user and counts the number of vowels and consonants in the string.
	Challenge: Extend the program to also count digits and special characters.
Ans. */
 
#include <stdio.h>
int main() 
{
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, specials = 0;

    printf("\n\n\t Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) 
	{
        char ch = str[i];

        switch (1) 
		{
            case 1:
                	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                    	ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
					{
                    	vowels++;
                    	break;
                	}
                
                	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
					{
                    	consonants++;
                    	break;
                	}
                
                	if (ch >= '0' && ch <= '9') 
					{
                    	digits++;
                    	break;
                	}

                	specials++;
                	break;
        }
    }

    	printf("\n\n\t Vowels: %d\n", vowels);
    	printf("\n\n\t Consonants: %d\n", consonants);
    	printf("\n\n\t Digits: %d\n", digits);
    	printf("\n\n\t Special characters: %d\n", specials);

    	return 0;
}

