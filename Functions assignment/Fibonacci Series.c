#include <stdio.h>
#include <stdlib.h>
//TUM KEITH KIMUTAI
//ENE212-0092/2021
//Fibonacci series

int main()
{
    int num, a=0,b=1,c;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Fibonacci series:");
    for(int i=0;i<num;i++)
    {
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
    return 0;
}
