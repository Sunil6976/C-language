#include <stdio.h>

// Function to calculate the length of the string manually
int getStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to reverse the string manually
void reverseString(char str[]) {
    int start = 0;
    int end = getStringLength(str) - 1;
    char temp;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // For full line input with spaces, use fgets()

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

