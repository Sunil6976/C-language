#include <stdio.h> 
int main() { 
FILE *fp; 
char text[] = "This is a sample string written to the file."; 
char ch; 
// Step 1: Create and write to the file 
fp = fopen("sample.txt", "w");  // Open file for writing 
if (fp == NULL) { 
printf("Error creating file!\n"); 
return 1; 
} 
fputs(text, fp);  // Write string to file 
fclose(fp);      
 // Close the file 
printf("String written to file successfully.\n"); 
// Step 2: Open file for reading 
fp = fopen("sample.txt", "r");  // Open file for reading 
if (fp == NULL) { 
printf("Error opening file for reading!\n"); 
return 1; 
} 
printf("\nContents of the file:\n"); 
// Read and display contents character by character 
while ((ch = fgetc(fp)) != EOF) { 
putchar(ch); 
} 
fclose(fp);  // Close the file 
return 0; 
}
