// Write a program to print the average of 3 numbers.
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers: \n");
    scanf("%f" "%f" "%f", &a,&b,&c);
    float avg = (a+b+c)/3;
    printf("The avg : %f", avg);
    return 0;
}