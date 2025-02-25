/*	Write a C program to create a file, write a string into it, close it, and 
	then open the file again to read and display its contents.
Ans. */

#include <stdio.h>
int main()
 {
    FILE *file;      
    char text[] = "Hello, this is a test string written to the file.";

    file = fopen("example.txt", "w");
    
    if (file == NULL) 
	{
        printf("\n\n\t Error opening file for writing.\n");
        return 1;
    }

    	fprintf(file, "%s", text);
    	printf("\n\n\t Text written to file successfully.\n");

    	fclose(file);

    	file = fopen("example.txt", "r");

    	if (file == NULL)
	 	{
        		printf("\n\n\t Error opening file for reading.\n");
        		return 1;
    	}

    	char file1[255];
    	printf("\n\n\t Reading from file:\n");
    	while (fgets(file1, size of(file1), file) != NULL) 
		{
        	printf("\n\n\t %s",file1); 
    	}

    	fclose(file);
}

