#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    printf("Enter the value of z : ");
    scanf("%d",&z);
    if(x>y && x>z)
    {
        printf("x is greatest");
    }
    if(y>x && y>z)
    {
        printf("y is greatest");
    }
    if(z>x && z>y)
    {
        printf("z is greatest");
    }
    return 0;
}