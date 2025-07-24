#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    if(x>99 && x<1000)
    {
        printf("It is a three digit number");
    }
    else
    {
        printf("It is not three digit number");
    }
    return 0;
}