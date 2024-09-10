// Write a program to calculate the factorial of a given number using a for loop. 

#include <stdio.h>

int main(){
    int num;
    int fact = 1;

    printf("\n enter the number : ");
    scanf("%d",&num);

    for (int i = 1; i <= num ; i++)
    {
        fact = fact * i;
    }
    
    printf("\n the factorial of %d = %d ",num,fact);

    return 0;
}