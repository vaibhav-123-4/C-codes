#include <stdio.h>

int main() {
    int a; // Number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("Invalid input.\n");
        return ;
    }

    int arr[a];

    // Taking Input  of the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables for sum, maximum, and minimum
    int sum = 0;
    int max = arr[0];
    int min = arr[0];

    // Calculate sum, maximum, and minimum
    for (int i = 0; i < a; i++) {
        sum += arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Calculate the average
    double average = (double)sum / a;

    // Display the results
    printf("Average: %.2lf\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
/*output :
Enter the number of elements in the array: 5
Enter the elements of the array:
1
2
3
4
5
Average: 3.00
Maximum: 5
Minimum: 1 */