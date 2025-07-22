#include <stdio.h> 
#include <string.h> 
int main() { 
char str1[100], str2[50];  // Make sure str1 has enough space for the result 
// Input two strings from user 
printf("Enter the first string: "); 
fgets(str1, sizeof(str1), stdin); 
printf("Enter the second string: "); 
fgets(str2, sizeof(str2), stdin); 
// Remove newline characters if any 
str1[strcspn(str1, "\n")] = '\0'; 
str2[strcspn(str2, "\n")] = '\0'; 
// Concatenate strings using strcat() 
strcat(str1, str2); 
// Display concatenated string and its length 
printf("Concatenated string: %s\n", str1); 
printf("Length of concatenated string: %lu\n", strlen(str1)); 
return 0; 
}
