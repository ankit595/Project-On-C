#include <stdio.h> 
#include <stdlib.h>

int main() 
{ 
	FILE *file1, *file2; 
	char filename[100], c; 

	printf("Enter the filename to open for reading \n"); 
	scanf("%s", filename); 

	// Open one file for reading 
	file1 = fopen(filename, "r"); 
	if (file1 == NULL) 
	{ 
		printf("Cannot open file %s \n", filename); 
		exit(0); 
	} 

	printf("Enter the filename to open for writing \n"); 
	scanf("%s", filename); 

	// Open another file for writing 
	file2 = fopen(filename, "w"); 
	if (file2 == NULL) 
	{ 
		printf("Cannot open file %s \n", filename); 
		exit(0); 
	} 

	// Read contents from file 
	c = fgetc(file1); 
	while (c != EOF) 
	{ 
		fputc(c, file2); 
		c = fgetc(file1); 
	} 

	printf("\nContents copied to %s", filename); 

	fclose(file1); 
	fclose(file2); 
	return 0; 
}
