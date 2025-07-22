#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Allows spaces

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Skip newline character
        if (ch == '\n') {
            continue;
        }

        // Check for vowels (both uppercase and lowercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check for consonants (alphabetic characters excluding vowels)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // All other non-space characters are special characters
        else if (ch != ' ') {
            special++;
        }
    }

    // Display the counts
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}

