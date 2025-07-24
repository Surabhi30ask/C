// cube of a given number 
#include<stdio.h>
int main()
{
    int n;
    printf(" Enter the value of n : ");
    scanf("%d", &n);
    int cube_of_a_number = n*n*n;
    printf(" The cube : %d", cube_of_a_number);
    return 0;
}