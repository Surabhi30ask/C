#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of k:");
    scanf("%d",&k);
    for(int i=n;i<=k;i=i+n)
    {
        printf("%d ",i);
    }
    return 0;
}