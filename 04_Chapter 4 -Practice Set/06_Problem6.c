//  Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

#include<stdio.h>

int main(){
    int i;
    int sum = 0;
    
    // by using for loop
    // for(i = 1 ; i <= 10 ; ++i)
    // {
    //     sum = sum + i;
    // }

    // by using do while loop
    i = 1;
    do
    {
        sum = sum + i;
        ++i;
    } while (i <= 10);
    
    
    printf("\n the sum of the first 10 natural numbers are %d",sum);

    return 0;
}