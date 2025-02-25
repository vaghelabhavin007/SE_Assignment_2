/*	3) LAB EXERCISE:
?		Write a C program that includes variables, constants, and comments. 
		Declare and use different data types (int, char, float) and display their values.
Ans. */
#include <stdio.h> 
main()
{

int temperature = 40, MAX_TEMP=50;
char grade = 'A'; 
float pi = 3.14; 


printf("\n\n\t Temperature: %d°C", temperature);    
printf("\n\n\t Grade: %c", grade);                 
printf("\n\n\t Value of Pi: %.5f", pi);             
printf("\n\n\t Max Temperature Constant: %d°C", MAX_TEMP);
};

