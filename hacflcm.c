#include <stdio.h>

// Function to find the HCF of two numbers
int findHCF(int num1, int num2) {  //taking input of two numbers
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    return num1;
}

// Function to find the LCM of two numbers
int findLCM(int num1, int num2) { 
    int hcf = findHCF(num1, num2);
    int lcm = (num1 * num2) / hcf;
    return lcm;
}

int main() {
    int num1, num2;
     printf("Enter two numbers: ");  //taking input
    scanf("%d %d", &num1, &num2);

    int hcf = findHCF(num1, num2);
    int lcm = findLCM(num1, num2);

    printf("HCF of %d and %d is %d\n", num1, num2, hcf); //printing hcf
    printf("LCM of %d and %d is %d\n", num1, num2, lcm); //printing lcm

return 0;
}

/*output:
Enter two numbers: 6
9
HCF of 6 and 9 is 3
LCM of 6 and 9 is 18*/