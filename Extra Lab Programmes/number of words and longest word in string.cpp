#include <stdio.h>

int main() {
    char str[200], longestWord[100], currentWord[100];
    int i = 0, j = 0, maxLength = 0, currentLength = 0, wordCount = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            currentWord[currentLength++] = str[i];
        } else {
            if (currentLength > 0) {
                currentWord[currentLength] = '\0'; // null-terminate current word
                wordCount++;

                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    int k;
                    for (k = 0; k <= currentLength; k++) {
                        longestWord[k] = currentWord[k];  // copy to longestWord
                    }
                }

                currentLength = 0; // reset for next word
            }
        }
        i++;
    }

    // In case last word doesn't end with space or newline
    if (currentLength > 0) {
        currentWord[currentLength] = '\0';
        wordCount++;
        if (currentLength > maxLength) {
            maxLength = currentLength;
            int k;
            for (k = 0; k <= currentLength; k++) {
                longestWord[k] = currentWord[k];
            }
        }
    }

    printf("Number of words: %d\n", wordCount);
    printf("Longest word: %s\n", longestWord);

    return 0;
}

