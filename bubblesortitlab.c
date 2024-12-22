#include <stdio.h>

// Function to perform Bubble Sort algorithm on an integer array
void bubbleSort(int arr[], int v) {
    for (int i = 0; i < v - 1; i++) {
        
        int swapped = 0;

        for (int j = 0; j < v - 1 - i; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;   //swapping of elements

                swapped = 1; // Mark that a swap has occurred
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted.
        if (swapped == 0)
            break;
    }
}

int main() {
    int arr[] = {89,45,25,76,29,32,18};
    int v = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < v; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, v);

    printf("\nSorted Array: ");
    for (int i = 0; i < v; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*output :
Original Array: 89 45 25 76 29 32 18 
Sorted Array: 18 25 29 32 45 76 89*/ 