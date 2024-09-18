//  Write a program using recursion to calculate nth element of Fibonacci series. 

#include <stdio.h>

// recursive function to calculate the nth element
int fibonacci(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else { 
        return fibonacci(n-1) + fibonacci(n-2); //recursive case
    }
    
}

int main(){
    int n;

    printf("\nEnter the position (n) of the fibonacci series : ");
    scanf("%d",&n);

    if (n < 0){
        printf("\nPlease enter non-negative number");
    }
    else{
        printf("\nFibonacci number of %d position is %d",n,fibonacci(n));
    }
    
    return 0;
}