#include <stdio.h> 
// Function declaration 
int factorial(int n); 
int main() { 
int number, result; 
// Take input from user 
printf("Enter a positive integer: "); 
scanf("%d", &number); 
// Check for valid input 
if (number < 0) { 
printf("Factorial is not defined for negative numbers.\n"); 
} else { 
// Function call 
result = factorial(number); 
// Display result 
printf("Factorial of %d is: %d\n", number, result); 
} 
return 0; 
} 
// Function definition 
int factorial(int n) { 
int fact = 1; 
for (int i = 1; i <= n; i++) { 
fact *= i; 
} 
return fact; 
}
