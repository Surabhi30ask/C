#include<stdio.h>
int main(){
    int n,table;
    printf("Enter a number for print table: ");
    scanf("%d", &n);
    table=1;
    for(int i=1; i<=10; i++){

    table=i*n;
    printf("%d\n",table);
    }
    return 0;
    
}