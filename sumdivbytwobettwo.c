#include<stdio.h>
int main()
{
    int i,num1,num2,sum=0;
    printf("Enter a number:");
    scanf("%d",&num1);
    printf("Enter a number:");
    scanf("%d",&num2);
    for(i=num1;i<=num2;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}