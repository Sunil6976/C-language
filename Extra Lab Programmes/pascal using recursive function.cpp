#include <stdio.h>

// Recursive function to calculate nCr
int nCr(int n, int r) {
    if (r == 0 || r == n) {
        return 1;  // Base case
    } else {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);  // Recursive case
    }
}

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Pascal's Triangle up to %d rows:\n", n);

    for (int i = 0; i < n; i++) {
        // Print leading spaces for formatting
        for (int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }

        // Print the values in the row
        for (int j = 0; j <= i; j++) {
            printf("%4d", nCr(i, j));
        }

        printf("\n");
    }

    return 0;
}

