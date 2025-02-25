/*	Write a C program that calculates the factorial of a given number using a function.
	Challenge: Implement both an iterative and a recursive version of the factorial function 
	and compare their performance for large numbers.
Ans. */
 
 #include <stdio.h>
#include <time.h>

// Iterative function
long long factorial_iterative(int n) 
{
    long long result = 1;
    for (int i = 1; i <= n; i++) 
	{
        result *= i;
    }
    return result;
}

// Recursive function
long long factorial_recursive(int n) 
{
    if (n == 0 || n == 1) 
	{  
        return 1;
    } else 
	{
        return n * factorial_recursive(n - 1); 
    }
}

int main() 
{
    int num;

    printf("\n\n\t Enter a number: ");
    scanf("%d", &num);

    // Measure time for iterative method
    clock_t start_iterative = clock();
    long long result_iterative = factorial_iterative(num);
    clock_t end_iterative = clock();
    double time_iterative = ((double)(end_iterative - start_iterative)) / CLOCKS_PER_SEC;

    // Measure time for recursive method
    clock_t start_recursive = clock();
    long long result_recursive = factorial_recursive(num);
    clock_t end_recursive = clock();
    double time_recursive = ((double)(end_recursive - start_recursive)) / CLOCKS_PER_SEC;

    // Output results
    printf("\n\n\t Factorial of %d using iterative method: %lld\n", num, result_iterative);
    printf("\n\n\t Time taken by iterative method: %f seconds\n", time_iterative);

    printf("\n\n\t Factorial of %d using recursive method: %lld\n", num, result_recursive);
    printf("\n\n\t Time taken by recursive method: %f seconds\n", time_recursive);

    if (time_recursive > time_iterative) 
	{
        printf("\n\n\t The iterative method is more efficient for large numbers.\n");
    } else if (time_recursive < time_iterative) 
	{
        printf("\n\n\t The recursive method is more efficient for small numbers.\n");
    } else 
	{
        printf("\n\n\t Both methods have the same efficiency for this input size.\n");
    }

    return 0;
}

