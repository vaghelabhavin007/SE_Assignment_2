/*	Write a C program that acts as a simple calculator. 
	The program should take two numbers and an operator as input from the user and perform the respective operation 
	(addition, subtraction, multiplication, division, or modulus) using operators.
	Challenge: Extend the program to handle invalid operator inputs.
Ans. */

#include <stdio.h>
#include <stdlib.h> 

int main() 
{
    float num1, num2, result;
    char ch;
    char opp;
    do 
	{
        printf("\n\n\t Enter any first numbers: ");
        scanf("%f", &num1);
        
        printf("\n\n\t Enter any second numbers: ");
        scanf("%f", &num2);
        
        printf("\n\n\t ----------MENU----------");
        printf("\n\n\t Enter operator (+ , -, *, /): ");
        scanf(" %c", &opp);
		 
        switch (opp) 
		{	
            case '+':
                	result = num1 + num2;
                	printf("\n\n\t The result of Addition is: %.2f", result);
                	break;
            case '-':
                	result = num1 - num2;
                	printf("\n\n\t The result of Subtraction is: %.2f", result);
                	break;
            case '*':
                	result = num1 * num2;
                	printf("\n\n\t The result of Multiplication is: %.2f", result);
                	break;
            case '/':
                	if (num2 != 0) 
						{
                    		result = num1 / num2;
                    		printf("\n\n\t The result of Division is: %.2f", result);
                		} else
						{
                    		printf("\n\n\t Error! Division by zero is not allowed.");
                		}
                		break;
            	default:
						printf("\n\n\t Invalid operator! Please select a valid operator.");
                		break;
        }
        	printf("\n\n\n\t Do you want to continue? (y/n) : ");
    		scanf(" %c",&ch);
    }
    while(ch=='y' || ch=='y');  
}

