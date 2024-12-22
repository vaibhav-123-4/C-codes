#include <stdio.h>

void reverseArray(int *arr, int size) {
    if (size <= 0)
        return;  // Handle empty array or invalid size

    int *start = arr;           // Pointer to the start of the array
    int *end = arr + size - 1;  // Pointer to the end of the array

    while (start < end) {
        // Swap the elements at start and end
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards the center
        start++;
        end--;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    reverseArray(arr, size);

    printf("\nReversed Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
/*output:
Original Array: 1 2 3 4 5 
Reversed Array: 5 4 3 2 1 */ 