/*	LAB EXERCISE:
?	Write a C program that stores 5 integers in a one-dimensional array and prints them. Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.
Ans. */
	//	C Program for One-Dimensional Array:
#include <stdio.h>
main() 
{
    // Declare a one-dimensional array to store 5 integers
    int arr[5];
    
    	printf("\n\n\t Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
	{
       	scanf("%d", &arr[i]);
    }
    	printf("\n\n\t The elements of the array are:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Declare a 3x3 matrix (2D array)
    int i=0, j=0, matrix[3][3];
    int sum = 0;

    // Input elements for the 2D array (3x3 matrix)
    printf("\n\n\t Enter elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
		{
            printf("\n\n\t Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n\n\t Elements of the 3x3 matrix are:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++) 
		{
            sum=sum+matrix[i][j];
        }
    }

    printf("\n\n\t Sum of all elements in the matrix: %d\n", sum);
}


