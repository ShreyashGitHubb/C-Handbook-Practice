// Write a recursive function to calculate the sum of first ‘n’ natural numbers. 

#include <stdio.h>

// recursive function to calculate the nth element
int sum_of_natural_number(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else { 
        return n + sum_of_natural_number(n-1); //recursive case
    }
    
}

int main(){
    int n, sum;

    printf("\nEnter the number : ");
    scanf("%d",&n);

    if (n < 1){
        printf("\nPlease enter positive number");
    }
    else{
        sum = sum_of_natural_number(n);
        printf("The sum of the first %d natural numbers is %d.\n", n, sum);
    }
    
    return 0;
}