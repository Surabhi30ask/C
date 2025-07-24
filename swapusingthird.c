#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    printf("%d,%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("%d,%d",a,b);
}