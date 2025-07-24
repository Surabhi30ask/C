#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            printf("Composite number");
            a=1;
            break;
        }
    }
    if(n==1)
    {
        printf("Neither Prime nor Composite");
    }
    else if(a==0)
    {
        printf("Prime number");
    }
    else
    {
        printf("Composite number");   
    }
    return 0;
}