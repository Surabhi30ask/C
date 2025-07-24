//celsius to Fahrenheit
#include<stdio.h>
int main()
{
    float celsius;
    printf("Enter degree celsius: ");
    scanf("%f", &celsius);
    float answer = (celsius * 9/5) + 32;
    printf("The fahrenheit : %f", answer);
    return 0;
}