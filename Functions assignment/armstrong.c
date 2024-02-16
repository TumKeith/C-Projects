#include <stdio.h>
#include <stdlib.h>
//TUM KEITH KIMUTAI
//ENE212-0092/2021
//C program to check whether a given number n is an Armstrong number


int main()
   {
   int num, original, remainder, n = 0;

   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   original = num;

   // store the number of digits of num in n
   for (original = num; original != 0; ++n) {
       original /= 10;
   }

   for (original = num; original != 0; original /= 10) {
       remainder = original % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
    return 0;
}
