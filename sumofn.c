#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}