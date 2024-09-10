//  Write a program to print multiplication table of a given number n.

#include <stdio.h>

void multiplication_Table(int n){
    printf("\n Multiplication table for %d number",n);
    for (int i = 1 ; i < 11 ; i++)
    {
        printf("\n %d x %d = %d ",n ,i ,n*i);
    }
    
}

int main(){
    int num;

    printf("\n Enter the to get the multiplication table : ");
    scanf("%d",&num);

    multiplication_Table(num);

    return 0;
}