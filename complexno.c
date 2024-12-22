#include <stdio.h>
struct Complex {
    float real;
    float imaginary;
};
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;

    return result;
}

int main() {
    
    struct Complex num1, num2, sum;

    
    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imaginary);

    
    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imaginary);

    
    sum = addComplex(num1, num2);

    
    printf("Sum: %.1f + %.1fi\n", sum.real, sum.imaginary);



return 0;
}
