#include<stdio.h>
int main()
{
     int i,num,count=0;
     printf("Enter a number:\n");
     scanf("%d",&num);
     for(i=1;i<=num;i++)
     {
          if(num%i==0)
          {
               count++;
          }
     }
     if(count==2)
     {
          printf("%d is a prime number",num);
     }
     else
     {
          printf("%d is not a prime number",num);
     }
     return 0;
}