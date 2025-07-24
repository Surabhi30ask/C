#include<stdio.h>
 
//Function Like Macros in C Language
#define FahrenheitToCelsius(Fahrenheit) ((Fahrenheit - 32.0) * 5/9)
int main()
{
    float Celsius, Fahrenheit;
    printf("Enter the Temperature in Fahrenheit: ");
    scanf("%f",&Fahrenheit);
    printf("The Temperature in Celsius is: ");
    printf("%f\n",FahrenheitToCelsius(Fahrenheit));
    return 0;
}