#include<stdio.h>
int main()
{
    int n,x,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        n=n/10;
        sum=sum+x;
    }
    printf("sum=%d",sum);
    return 0;
}