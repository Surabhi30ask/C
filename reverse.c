#include<stdio.h>
int main()
{
    int n,x,rev=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
       rev=rev*10+x; 
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}