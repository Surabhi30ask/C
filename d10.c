// Percentage of all 5 subjects
#include<stdio.h>
int main()
{
    float x1,x2,x3,x4,x5,total,percentage;
    printf("Enter marks of 5 sub:\n ");
    scanf("%f%f%f%f%f",&x1, &x2, &x3, &x4, &x5);
    total = x1 + x2 + x3 + x4 + x5;
    percentage = (total / 5);
    printf("Total marks: %f\n",total);
    printf("Total percentage: %f",percentage);
    return 0;
}