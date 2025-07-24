#include<stdio.h>
int main()
{
    int nodays,years,week,days;
    printf("Enter nodays");
    scanf("%d",&nodays);
    years=nodays/365;
    week=(nodays%365)/7;
    days=(nodays%365)%7;
    printf("%d,%d,%d\n",years,week,days);

}