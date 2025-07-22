#include <stdio.h> 
// Define the structure 
struct Student { 
char name[50]; 
int rollNumber; 
float marks; 
}; 
int main() { 
struct Student students[3];  // Array of 3 Student structures 
// Input details for 3 students 
for (int i = 0; i < 3; i++) { 
printf("\nEnter details for student %d:\n", i + 1); 
printf("Name: "); 
scanf(" %[^\n]", students[i].name);  // Read string with spaces 
printf("Roll Number: "); 
scanf("%d", &students[i].rollNumber); 
printf("Marks: "); 
scanf("%f", &students[i].marks); 
} 
// Display student details 
printf("\n----- Student Details -----\n"); 
for (int i = 0; i < 3; i++) { 
printf("Student %d:\n", i + 1); 
printf("Name  : %s\n", students[i].name); 
printf("Roll Number: %d\n", students[i].rollNumber); 
printf("Marks  : %.2f\n", students[i].marks); 
printf("---------------------------\n"); 
} 
return 0; 
} 

