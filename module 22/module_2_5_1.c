/*	Write a C program that generates the Fibonacci sequence up to N terms using a recursive function.
	Challenge: Modify the program to calculate the Nth Fibonacci number using iterative and recursive methods. 
	Compare their efficiency.
Ans. */
 
 #include <stdio.h>
#include <time.h>

// Recursive function
int fibonacci_recursive(int n) 
{
    if (n <= 1) 
	{
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Iterative function
int fibonacci_iterative(int n) 
{
    int a = 0, b = 1, c;
    if (n <= 1) 
	{
        return n;
    }
    for (int i = 2; i <= n; i++) 
	{
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void print_fibonacci_sequence(int n) 
{
    printf("\n\n\t Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");
}

int main() 
{
    int N;

    printf("\n\n\t Enter the number of terms (N): ");
    scanf("%d", &N);

    print_fibonacci_sequence(N);
    
    clock_t start_recursive = clock();
    int result_recursive = fibonacci_recursive(N - 1);
    clock_t end_recursive = clock();
    double time_recursive = ((double)(end_recursive - start_recursive)) / CLOCKS_PER_SEC;

    clock_t start_iterative = clock();
    int result_iterative = fibonacci_iterative(N - 1);
    clock_t end_iterative = clock();
    double time_iterative = ((double)(end_iterative - start_iterative)) / CLOCKS_PER_SEC;

    printf("\n\n\t Nth Fibonacci number using recursive method: %d\n", result_recursive);
    printf("\n\n\t Time taken by recursive method: %f seconds\n", time_recursive);

    printf("\n\n\t Nth Fibonacci number using iterative method: %d\n", result_iterative);
    printf("\n\n\t Time taken by iterative method: %f seconds\n", time_iterative);

    if (time_recursive > time_iterative) 
	{
        printf("\n\n\t The iterative method is more efficient for large N.\n");
    } else 
	{
        printf("\n\n\t The recursive method is more efficient for small N.\n");
    }

    return 0;
}

