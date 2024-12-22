#include <stdio.h>

// Function to perform insertion sort on an array
void insertionSort(int arr[], int n) {
    //for loop
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // Select the current element to be inserted
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than the key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift the elements to the right
            j--;
        }

        arr[j + 1] = key;  // Place the key in its correct position
    }
}

int main() {
    int arr[] = {100,55,24,78,79,56,23,41};
    
    
    
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);  // Call the insertion sort function

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print the sorted array
    }

    return 0;
}
/*output :
Sorted array: 23 24 41 55 56 78 79 100*/