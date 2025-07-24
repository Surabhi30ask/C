#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The greatest number is %d",a);
        }
        else
        {
            printf("The greatest number is %d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("The greatest number is %d",b);
        }
        else
        {
            printf("The greatest number is %d",c);
        }
    }
        return 0;
}