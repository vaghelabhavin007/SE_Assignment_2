/*	Write a C program that accepts 10 integers from the user and stores them in an array. 
	The program should then find and print the maximum and minimum values in the array.
	Challenge: Extend the program to sort the array in ascending order.
Ans. */

#include <stdio.h>
int main()
{
    int arr[10], i, j, temp=0;
    int max=0, min=0;
    
    printf("\n\n\t Enter 10 integers:\n");
    for (i=0;i<10;i++) 
	{
        scanf("%d", &arr[i]);
    }
    	max = arr[0];
    	min = arr[0];

    for (i=1;i<10;i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }

	printf("\n\n\t Maximum value: %d\n", max);
    printf("\n\n\t Minimum value: %d\n", min);

    for (i=0;i<9;i++) 
	{
        for (j=i+1;j<10;j++) 
		{
            if (arr[i] > arr[j]) 
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("\n\n\t Sorted array in ascending order:\n");
    for (i=0;i<10;i++) 
	{
        printf("\t %d ", arr[i]);
    }
    printf("\n");
}

