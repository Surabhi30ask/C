#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    if(x<0)
    {
        x = x * (-1);
    }
    printf("Absolute value is: %d",x);
    return 0;
}