#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=19;i<=n;i=i+19)
    {
        printf("%d\n",i);
    }
    return 0;
}