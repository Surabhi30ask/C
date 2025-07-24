// Profit and loss
#include<stdio.h>
int main()
{
    int cp,sp,solution;
    printf("Enter the value of cp: ");
    scanf("%d",&cp);
    printf("Enter the value of sp: ");
    scanf("%d",&sp);
    solution = sp - cp;
    printf("%d\n",solution);
    if(sp>cp)
    {
        printf("Profit of rupees %d",solution);
    }
    else if(cp>sp)
    {
        printf("Loss of rupees %d",solution);
    }
    else
    {
        printf("No profit, No loss");
    }
    return 0;
}