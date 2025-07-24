#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    if(x%4==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not Leap year");
    }
    return 0;
}