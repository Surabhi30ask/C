#include<stdio.h>
int main()
{
    float x;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    int y = x;
    float answer = x - y;
    printf("the value of y is : %d\n",y);
    printf("The fractional part is : %f",answer);
    return 0;
}