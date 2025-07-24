#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    if(x%5==0 || x%3==0)
    {
        printf("It is divisible by 5 or 3");
    }
    else
    {
        printf("It is not divisible by 5 or 3");
    }
    return 0;
}