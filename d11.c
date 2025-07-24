// Percentage of 4 sub whose total marks are out of 40
#include<stdio.h>
int main()
{
    float x1,x2,x3,x4,total,percentage;
    printf("Enter marks of 4 sub:\n ");
    scanf("%f%f%f%f",&x1, &x2, &x3, &x4);
    total = x1 + x2 + x3 + x4;
    percentage = (total * 160) / 100;
    printf("Total marks: %f\n",total);
    printf("Total percentage: %f",percentage);
    return 0;
}