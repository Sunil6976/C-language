#include <stdio.h> 
int main() { 
int a, b; 
printf("Enter first integer (a): "); 
scanf("%d", &a); 
printf("Enter second integer (b): "); 
scanf("%d", &b); 
// Arithmetic Operations 
printf("\n--- Arithmetic Operations ---\n"); 
printf("a + b = %d\n", a + b); 
printf("a - b = %d\n", a - b); 
printf("a * b = %d\n", a * b); 
// Prevent division by zero 
if (b != 0) { 
printf("a / b = %d\n", a / b); 
printf("a %% b = %d\n", a % b);  // %% to print % symbol 
} else { 
printf("Division and modulus by zero are not allowed.\n"); 
} 
// Relational Operations 
printf("\n--- Relational Operations ---\n"); 
printf("a == b : %d\n", a == b); 
printf("a != b : %d\n", a != b); 
printf("a > b  : %d\n", a > b); 
printf("a < b  : %d\n", a < b); 
printf("a >= b : %d\n", a >= b); 
printf("a <= b : %d\n", a <= b); 
// Logical Operations 
printf("\n--- Logical Operations ---\n"); 
printf("(a && b)  : %d\n", a && b);   // true if both are non-zero 
printf("(a || b)  : %d\n", a || b);   // true if at least one is non-zero 
printf("!(a) :%d\n", !a);     
return 0; 
} 

