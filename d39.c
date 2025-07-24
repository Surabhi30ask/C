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
    if(x<y && x<z)
    {
        printf("x is smallest");
    }
    if(y<x && y<z)
    {
        printf("y is smallest");
    }
    if(z<x && z<y)
    {
        printf("z is smallest");
    }
    return 0;
}