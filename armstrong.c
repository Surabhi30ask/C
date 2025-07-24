#include<stdio.h>
#include<math.h>
int main ()
{
    int n,num;
    float x=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        x+=pow(num%10,3);
        num/=10;
    }
    if(x==n)
    printf("%d is Armstrong",n);
    else
    printf("%d is not Armstrong",n);
    return 0;
}
    