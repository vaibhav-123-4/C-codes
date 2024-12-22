#include <stdio.h>
int main()
{
    int a;
    printf("Enter the no.");
    scanf("%d", a);
    if (a % 5 == 0 || a % 3 == 0) // || or operator
                                     // && and operator
    {
        printf("The no. is divisible by 5 or 3");
    }
    else
    {
        printf("The no. is not divisible by 5 or 3");
    }

    return 0;
}