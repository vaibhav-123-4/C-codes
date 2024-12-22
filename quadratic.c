#include <stdio.h>
#include <math.h>

// Function to find the roots using call by value
void findRootsByValue(double a, double b, double c, double *root1, double *root2) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);
    }
}

// Function to find the roots using call by reference
void findRootsByReference(double a, double b, double c, double *root1, double *root2) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);
    }
}

int main() {
    double coeffA, coeffB, coeffC;
    double root1, root2;

    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &coeffA, &coeffB, &coeffC);

    // Call by value
    findRootsByValue(coeffA, coeffB, coeffC, &root1, &root2);
    if (!isnan(root1) && !isnan(root2)) {
        printf("Roots using Call by Value: root1 = %lf, root2 = %lf\n", root1, root2);
    } else {
        printf("Complex roots using Call by Value.\n");
    }

    // Call by reference
    findRootsByReference(coeffA, coeffB, coeffC, &root1, &root2);
    if (!isnan(root1) && !isnan(root2)) {
        printf("Roots using Call by Reference: root1 = %lf, root2 = %lf\n", root1, root2);
    } else {
        printf("Complex roots using Call by Reference.\n");
    }

    return 0;
}
/*output :
Enter the coefficients of the quadratic equation (a, b, c): 1
11
28
Roots using Call by Value: root1 = -4.000000, root2 = -7.000000
Roots using Call by Reference: root1 = -4.000000, root2 = -7.000000*/