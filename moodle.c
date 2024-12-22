#include <stdio.h>

// program to find the hcf of two number
int calculateHCF(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 16, num2 = 30;

    // Calculate HCF
    int hcf = calculateHCF(num1, num2);

    // Display the HCF
    printf("The Highest Common Factor (HCF) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
/*output:
The Highest Common Factor (HCF) of 16 and 30 is 2*/