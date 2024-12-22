#include <stdio.h>

// Define the recursive function
void recursiveFunction(int count) {
    // Base case: When count reaches 0, stop recursion
    if (count == 0) {
        return;
    }

    // Print the current count
    printf("Calling function with count = %d\n", count);

    // Call the function recursively with count - 1
    recursiveFunction(count - 1);
}

int main() {
    // Start the recursion with an initial count of 5
    recursiveFunction(5);

    return 0;
}
/*
output :
Calling function with count = 5
Calling function with count = 4
Calling function with count = 3
Calling function with count = 2
Calling function with count = 1
*/