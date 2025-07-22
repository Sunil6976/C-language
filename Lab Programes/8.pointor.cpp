#include <stdio.h> 
int main() { 
int number = 10; 
int *ptr;  // Declare a pointer to int 
ptr = &number;  // Store the address of 'number' in pointer 
printf("Original value of number: %d\n", number); 
// Modify value using pointer 
*ptr = 25; 
printf("Modified value of number using pointer: %d\n", number); 
printf("Address of number: %p\n", &number); 
printf("Pointer ptr points to address: %p\n", ptr); 
printf("Value at the address ptr points to: %d\n", *ptr); 
return 0; 
}
