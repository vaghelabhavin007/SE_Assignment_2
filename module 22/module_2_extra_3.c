/*	Write a C program that implements a simple number-guessing game. 
	The program should generate a random number between 1 and 100, and the user should guess the number within a limited number of attempts.
	Challenge: Provide hints to the user if the guessed number is too high or too low.
Ans. */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int number, guess, attempts = 0, maxAttempts = 10;

    srand(time(0)); 
    number = rand() % 100 + 1; 

    printf("\n\n\t Welcome to the Number Guessing Game!\n");
    printf("\n\n\t I have chosen a number between 1 and 100.\n");
	printf("\n\n\t You have %d attempts to guess the number.\n", maxAttempts);

    while (attempts < maxAttempts) 
	{
        printf("\n\n\t Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if (guess < number) 
		{
            printf("\n\n\t Too low! Try again.\n");
        } else if (guess > number) 
		{	
            printf("\n\n\t Too high! Try again.\n");
        } else 
			{
            printf("\n\n\t Congratulations! You guessed the number %d correctly in %d attempts.\n", number, attempts);
            	break;
        	}
    	}

    	if (guess != number) 
		{	
			printf("\n\n\t Sorry, you've used all your attempts. The correct number was %d.\n", number);
    	}
    	return 0;
}

