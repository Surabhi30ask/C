#include<stdio.h>
int main()
{
    int a=0,b=1,c,num,count;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("The series is:\n");
    printf("%d\n%d\n",a,b);
    count=2;
    while(count<num)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
        count++;
    }
    return 0;
}