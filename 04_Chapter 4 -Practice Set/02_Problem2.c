//  Write a program to print multiplication table of 10 in reversed order.

#include <stdio.h>

void multiplication_reversed_Table(int n){
    printf("\n Multiplication table for %d number",n);
    for (int i = 10 ; i > 0 ; i--)
    {
        printf("\n %d x %d = %d ",n ,i ,n*i);
    }
    
}

int main(){
    int num;

    printf("\n Enter the to get the multiplication table : ");
    scanf("%d",&num);

    multiplication_reversed_Table(num);

    return 0;
}