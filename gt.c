#include<stdio.h>
int main(){
    int a=2;
    switch('A'){
        case 'B': printf("%d", 4);
        break;
        case 'A': printf("%d", 2);
        break;
        default : printf("None");
    }
}