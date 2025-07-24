#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of Ram: ");
    scanf("%d",&a);
    printf("Enter the value of Shyam: ");
    scanf("%d",&b);
    printf("Enter the value of Ajay: ");
    scanf("%d",&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("Ram is youngest");
        }
        else
        {
            printf("Ajay is youngest");
        }
    }
    else
    {
        if(b<c)
        {
            printf("Shyam is youngest");
        }
        else
        {
            printf("Ajay is youngest");
        }
    }
    return 0;
}