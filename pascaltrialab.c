#include <stdio.h>

long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

void printPascalTriangle(int numRows) {
    int i, j;

    for (i = 0; i < numRows; i++) {
        // Print spaces for formatting
        for (j = 0; j < numRows - i; j++)
            printf(" ");

        for (j = 0; j <= i; j++) {
            // Print the binomial coefficient
            long coef = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%ld ", coef);
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

    printPascalTriangle(numRows);

    return 0;
}
