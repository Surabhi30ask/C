// Calculate simple interest
#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter principal:");
    scanf("%f",&p);
    printf("Enter rate:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("The si is:%f",si);
    return 0;
}