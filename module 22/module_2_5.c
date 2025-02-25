/*	5)LAB EXERCISE:
?	Write a C program to check if a number is even or odd using an if-else statement. Extend the program using a switch statement to display the month name based on the user’s input (1 for January, 2 for February, etc.). 
Ans. */

#include <stdio.h>
int main()
{
    int num, month;

    printf("\n\n\t Enter a number: ");
    scanf("%d", &num);
    
    printf("\n\n\t Enter a number between 1 and 12 to get the month: ");
    scanf("%d", &month);

    	if (num % 2 == 0) 
		{
        	printf("\n\n\t The number %d is even.\n", num);
    	} else 
		{
        	printf("\n\n\t The number %d is odd.\n", num);
    	}

    	switch(month) 
		{
        	case 1:
            	printf("\n\n\t Month 1 is January.");
            	break;
        	case 2:
            	printf("\n\n\t Month 2 is February.");
            	break;
        	case 3:
            	printf("\n\n\t Month 3 is March.");
            	break;
        	case 4:
            	printf("\n\n\t Month 4 is April.");
            	break;
        	case 5:
            	printf("\n\n\t Month 5 is May.");
            	break;
        	case 6:
            	printf("\n\n\t Month 6 is June.");
            	break;
        	case 7:
            	printf("\n\n\t Month 7 is July.");
            	break;
        	case 8:
            	printf("\n\n\t Month 8 is August.");
            	break;
        	case 9:
            	printf("\n\n\t Month 9 in September.");
            	break;
        	case 10:
            	printf("\n\n\t Month 10 is October.");
            	break;
        	case 11:
            	printf("\n\n\t Month 11 in November.");
            	break;
        	case 12:
            	printf("\n\n\t Month 12 is December.");
            	break;
        	Default:
					printf("\n\n\t Invalid month number. Please enter a number between 1 and 12.");
    	}
}

