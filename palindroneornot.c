#include<stdio.h>
int main()
{
    int n,x,original,rev=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        x=n%10;
        rev=rev*10+x;
        n/=10;
    }
    if(original==rev)
    printf("%d is palindrone",original);
    else
    printf("%d is not palindrone",original);
    return 0;
    
}