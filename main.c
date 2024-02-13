#include <stdio.h>
#include <stdlib.h>
// TUM KEITH KIMUTAI
// ENE212-0092/2021

int main()
{
    int num1;
    int num2;
    int sum;
    int difference;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;

    printf("Sum of your numbers is: %d\n", sum);
    printf("Difference of your numbers is: %d\n", difference);
    printf("The sum and difference of the numbers are: %d, %d", sum, difference );
    printf("respectively");


    return 0;
}
