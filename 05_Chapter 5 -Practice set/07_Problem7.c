// Write a program using function to print the following pattern (first n lines) 
// * 
// * * * 
// * * * * *

#include <stdio.h>

void print_pattern(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    int n;

    printf("\nEnter the no of lines : ");
    scanf("%d",&n);

    print_pattern(n);

    return 0;
}