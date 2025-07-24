// remainder using modulo operator
#include<stdio.h>
int main()
{
    int a,b,remainder;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    remainder = a % b;
    printf("The remainder is : %d",remainder);
    return 0;
    }