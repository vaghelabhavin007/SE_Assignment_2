/*	Write a C program that takes N numbers from the user and stores them in an array. 
	The program should then calculate and display the sum of all array elements.
	Challenge: Modify the program also to find the average of the numbers.
Ans. */

#include <stdio.h>
int main() 
{
    int n,sum = 0;
    float average;

    printf("\n\n\t Enter the number of elements: ");
    scanf("%d", &n);

   	int numbers[n];

    printf("\n\n\t Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) 
	{
        printf("\n\n\t Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum=sum+numbers[i];  
    }

    average = (float)sum / n;

    printf("\n\n\t Sum of the numbers: %d\n", sum);
    printf("\n\n\t Average of the numbers: %.2f\n", average);
}


