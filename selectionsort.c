#include <stdio.h>

void selectionSort(int arr[], int n) {
    //using for loop
    for (int i = 0; i < n - 1; i++) {
        // Assume the current element is the minimum
        int min_index = i;

        // Find the index of the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++) {
            // Compare the current  minimum with the current element
            if (arr[j] < arr[min_index]) {
                // If a smaller element is found, update the index of the minimum
                min_index = j;
            }
        }

        // Swap arr[i] and the minimum element found
        // Place the minimum element at the beginning of the sorted portion
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int v[] = {100,154,78,25,89,14};
    int n = sizeof(v) / sizeof(v[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    selectionSort(v, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
/*output:
Original array: 100 154 78 25 89 14 
Sorted array: 14 25 78 89 100 154 */