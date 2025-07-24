#include<stdio.h>
int main()
{
    int a,b,quo,remainder;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    quo = a / b;
    remainder = a - (b * quo);
    printf("The quotient is : %d\n",quo); 
    printf("The remainder is : %d",remainder);
    return 0;
    }