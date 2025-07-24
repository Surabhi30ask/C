// Area of a Circle
#include<stdio.h>
int main()
{
    float area, r;
    printf("Enter radius: ");
    scanf("%f",&r);
    area = 3.14 * r * r;
    printf("The area of a circle: %f",area);
    return 0;
}