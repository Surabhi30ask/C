/* Volume of a Sphere */
#include<stdio.h>
int main()
{
    float r,Volume;
    printf("Enter the value of radius:");
    scanf("%f",&r);
    Volume = 4 * 3.14 * r * r * r / 3;
    printf("The volume of Sphere is: %f",Volume);
    return 0;
}