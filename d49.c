#include<stdio.h>
int main()
{
    double x1, x2, x3, y1, y2, y3, m1, m2;
    printf("Enter the value of x1: ");
    scanf("%lf",&x1);
    printf("Enter the value of x2: ");
    scanf("%lf",&x2);
    printf("Enter the value of x3: ");
    scanf("%lf",&x3);
    printf("Enter the value of y1: ");
    scanf("%lf",&y1);
    printf("Enter the value of y2: ");
    scanf("%lf",&y2);
    printf("Enter the value of y3: ");
    scanf("%lf",&y3);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    printf("value of slope m1: %lf\n",m1);
    printf("value of slope m2: %lf\n",m2);
    if(m1==m2)
    {
        printf("Yes, The points falls on the straight line");
    }
    else
    {
        printf("No, The points doesn't falls on the straight line");
    }
}