#include <stdio.h>

void HollowDiamond(int n) {
    int i, j;

    // Print the top half of the diamond
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        printf("*");
        if (i != 1) {
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half of the diamond
   /**/ for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        printf("*");
        if (i != 1) {
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the hollow diamond: ");
    scanf("%d", &n);

    HollowDiamond(n);


    return 0;
}
