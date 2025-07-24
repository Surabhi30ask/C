#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of percentage: ");
    scanf("%d",&x);
    if(x>90)
    {
        printf("Excellent");
    }
    else
    {
        if(x>80)
        {
            printf("very Good");
        }
        else
        {
            if(x>70)
            {
                printf("Good");
            }
            else
            {
                if(x>60)
                {
                    printf("Can do better");
                }
                else
                {
                    if(x>50)
                    {
                        printf("Average");
                    }
                    else
                    {
                        if(x>40)
                        {
                            printf("Below Average");
                        }
                        else
                        {
                            printf("Fail");
                        }
                    }

                }
            }
        }
    }
    return 0;
}