// Print half of a variable using another variable
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    float y = x;
    float half = y / 2;
    printf("The value of dummy y is : %f\n",y);
    printf("The half of the number is : %f",half);
    return 0;
}