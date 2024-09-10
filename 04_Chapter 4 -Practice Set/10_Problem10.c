// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    int num;
    int isprime = 1;

    printf("\n enter the number : ");
    scanf("%d", &num);

    if (num == 0 || num == 1){
        isprime = 0;
    }
    else{
        for (int i = 2; i * i <= num; i++){
            if (num % i == 0){
                isprime = 0;
                break;
            }
        }
    }

    if (isprime == 1){
        printf("\n entered number is prime");
    }
    else{
        printf("\n entered number is not prime");
    }

    return 0;
}