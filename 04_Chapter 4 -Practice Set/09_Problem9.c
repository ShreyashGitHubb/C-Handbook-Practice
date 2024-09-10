// Repeat 8 using while loop.

#include <stdio.h>

int main(){
    int num;
    int fact = 1;
    int i = 1;

    printf("\n enter the number : ");
    scanf("%d",&num);

    while (i <= num)
    {
        fact = fact * i;
        ++i;
    }
    
    printf("\n the factorial of %d = %d ",num,fact);

    return 0;
}