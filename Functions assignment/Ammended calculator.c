#include <stdio.h>
#include <stdlib.h>
//TUM KEITH KIMUTAI
//ENE212-0092/2021
//AMMENDED CALCULATOR
 int multiplication(int num1,int num2)
 {
     return num1*num2;
 }
  int division(int num1, int num2, int*quotient)
  {
      if(num2==0)
         {
             printf("math error:\n");
             return 0;
         }else
            {
                *quotient=num1/num2;
                return 1;
            }
  }
   int checkEvenorOdd(int num)
   {
       if (num %2==0)
        return 1;//Even
       else
        return 0;//Odd
   }
    intRemainder(int num1,int num2)
    {
        return num1 %num2;
    }
int main()
{
    int num1, num2,product,quotient,Remainder;
    //Enter 2 numbers
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    //Multiplication
    product=multiplication(num1,num2);
    printf("product:%d\n",product);

    //Division
    if(division(num1,num2,&quotient))
    {
        printf("quotient:%d\n",quotient);
    }
    //Check for even or odd numbers
    if(checkEvenorOdd(num1))
    {
        printf("%d is even.\n",num1);

    }
    else
    {
        printf("%d is odd.\n", num1);
    }
    if(checkEvenorOdd(num2))
    {
        printf("%d is even.\n",num2);
    }
    else
    {
        printf("%d is odd\n", num2);
    }
    //Check for remainder
    printf("Remainder:%d\n",(num1,num2));


    return 0;
}
