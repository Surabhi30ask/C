#include<stdio.h>
int main()
{
    int length,breadth,ar,peri;
    printf("Enter the value of l : ");
    scanf("%d",&length);
    printf("Enter the value of b : ");
    scanf("%d",&breadth);
    ar = length * breadth;
    peri = 2 * (length + breadth);
    printf("The area is : %d\n",ar);
    printf("The perimeter is : %d\n",peri);
    if(ar>peri)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}