// Calculate area and perimeter of a rectangle
#include<stdio.h>
int main()
{
    float l,b;
    printf("Enter length of retcangle: ");
    printf("Enter breadth of retcangle: ");
    scanf("%d %d", &l, &b);
    float perimeter = 2 * (l + b);
    float area = (l * b);
}