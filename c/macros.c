#include <stdio.h>
#define ADD(a, b) ((a) + (b))

int main() 
{
    int num1 = 5, num2 = 7;
    int result;
    result = ADD(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, result);
}

