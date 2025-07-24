#include<stdio.h>
int main()
{
    int i,j;
    float salary,bonus;
    char gender;
    printf("Enter 'F' for Female and 'M' for Male");
    scanf("%c",&gender);
    printf("Enter salary");
    scanf("%f",&salary);
    if(gender== 'M')
    {
        if(salary>10000)
        bonus=(salary*0.05);
        else
        bonus=(salary*0.07);
    }
    if(gender== 'F')
    {
        if(salary>10000)
        bonus=(salary*0.1);
        else
        bonus=(salary*0.12);
    }
    salary+=bonus;
    printf("Bonus=%0.2f\nSalary=%0.2f\n",bonus,salary);
    return 0;
}