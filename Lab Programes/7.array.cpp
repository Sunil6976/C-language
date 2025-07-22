#include <stdio.h> 
int main() { 
// Part 1: One-Dimensional Array 
int arr1D[5]; 
printf("Enter 5 integers for the 1D array:\n"); 
// Taking input for 1D array 
for (int i = 0; i < 5; i++) { 
printf("Element %d: ", i + 1); 
scanf("%d", &arr1D[i]); 
} 
// Displaying 1D array 
printf("You entered (1D array): "); 
for (int i = 0; i < 5; i++) { 
printf("%d ", arr1D[i]); 
} 
// Part 2: Two-Dimensional Array (3x3 matrix) 
int matrix[3][3], sum = 0; 
printf("\n\nEnter 9 integers for the 3x3 matrix:\n"); 
for (int row = 0; row < 3; row++) { 
for (int col = 0; col < 3; col++) { 
printf("Element [%d][%d]: ", row, col); 
scanf("%d", &matrix[row][col]); 
sum += matrix[row][col]; // Adding to sum directly 
} 
} 
// Displaying the matrix 
printf("\nYou entered the matrix:\n"); 
for (int row = 0; row < 3; row++) { 
for (int col = 0; col < 3; col++) { 
printf("%d\t", matrix[row][col]); 
} 
printf("\n"); 
} 
// Display the sum of all elements 
printf("Sum of all elements in the 3x3 matrix = %d\n", sum); 
    return 0; 
} 

