// Write a program using function to find average of three numbers.

#include <stdio.h>

void average(int n1, int n2, int n3){

    float avg = (n1 + n2 + n3) / 3.0; // calculating the average in float to get perfect result
    printf("\n average = %.2f", avg);
}

int main(){

    int n1, n2, n3;
    printf("\n Enter three numbers : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    average(n1, n2, n3);

    return 0;
}