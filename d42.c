#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    if(x%5==0 || x%3==0 && x%5!=0)
    {
        printf("The number is divisible by 5 or 3 but not 15");
    }
    else
    {
        printf("The number is not matching the required condition");
    }
    return 0;
}