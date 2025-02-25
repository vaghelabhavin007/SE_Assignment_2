/*	Write a C program that accepts two 2x2 matrices from the user and adds them.
	Display the resultant matrix.
	Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.
Ans. */
 
#include<stdio.h>
int main() 
{
    int i, j;
    int matrix1[2][2], matrix2[2][2], result[2][2];

    printf("\n\n\t Enter elements for the first 2x2 matrix:\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("\n\n\nt Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n\n\t Enter elements for the second 2x2 matrix:\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("\n\n\t Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\n\n\t Resultant Matrix after addition:\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

	int mat1[3][3], mat2[3][3], mul[3][3];	
	int r, c, k;
	
	printf("\n\n\n\t Input Matrix-1 ------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t mat[%d][%d] : ", r, c);
			scanf("%d",&mat1[r][c]);
		}
	}
	
	printf("\n\n\n\t Input Matrix-2 ------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t mat[%d][%d] : ", r, c);
			scanf("%d",&mat2[r][c]);
		}
	}
	
	printf("\n\n\n\t Matrix-1 ------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d", mat1[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\n\t Matrix-2 ------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d", mat2[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\n\t Multiplication of Matrix 1 & 2 ------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			mul[r][c]=0;
			for(k=0;k<3;k++)
			{
				mul[r][c]=mul[r][c]+(mat1[r][k]*mat2[k][c]);
			}
			
		}
		printf("\n");
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d", mul[r][c]);
		}
		printf("\n");
	}
}


