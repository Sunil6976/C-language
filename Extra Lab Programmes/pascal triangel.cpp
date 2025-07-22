#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Pascal's Triangle up to %d rows:\n", n);

    for (int i = 0; i < n; i++) {
        int num = 1;

        // Print spaces to center-align the triangle
        for (int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }

        // Print numbers in the row
        for (int j = 0; j <= i; j++) {
            printf("%4d", num);
            // Compute next value in row using formula:
            // num = num * (i - j) / (j + 1)
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}

