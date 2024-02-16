#include <stdio.h>
#include <stdlib.h>

// TUM KEITH KIMUTAI
// ENE212-0092/2021
// MULTIPLICATION AND DIVISION CALCULATOR THAT CHECKS FOR DIVISION BY ZERO, REMAINDER, EVEN AND ODD NUMBERS.

int main()

{


    int num1,num2,multiplication,quotient,remainder;
    //Enter two numbers


    printf("Enter first number:", num1);
    scanf("%d", &num1);
    printf("Enter second number:", num2);
    scanf("%d", &num2);

    //Check for division by zero
    if (num2==0)
    {
        printf("Math error:");
    }
    else
    {
        //perform multiplication and division and determine remainder
        multiplication= num1 * num2;
        quotient= num1 / num2;
        remainder= num1 % num2;

        printf("multiplication is: %d\n", multiplication);
        printf("quotient is: %d\n", quotient);

        //check for remainder
        printf("remainder is: %d\n", remainder);

        if(remainder==0)
        {
            printf("%d is completely divisible by %d\n",num1,num2);

        }
        else
        {
            printf("%d is not completely divisible by %d. Remainder:%d\n",num1,num2,remainder);
        }
        // determine if numbers are even or odd
        if(num1 %2==0)
        {
            printf("%d even\n",num1);
        }
        else
        {
            printf("%d odd\n",num1);
        }
        if(num2 %2==0)
        {
            printf("%d even\n",num2);
        }
        else
        {
            printf("%d odd\n", num2);
        }



    }
    return 0;


}


