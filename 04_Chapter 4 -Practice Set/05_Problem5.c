// Write a program to sum first ten natural numbers using while loop. 

#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;

    while (i <= 10)
    {
        sum = sum + i;
        ++i;
    }
    
    printf("\n the sum of the first 10 natural numbers are %d",sum);

    return 0;
}