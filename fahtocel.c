// Fahrenheit to Celsius
#include<stdio.h>
int main()
{
    float Fahrenheit;       
    printf("Enter Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    float answer = ((Fahrenheit - 32) * 5/9);
    printf("The celsius : %f", answer);
    return 0 ;
}