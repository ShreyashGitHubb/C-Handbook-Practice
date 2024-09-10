// Write a program to calculate the sum of the numbers occurring in the 
// multiplication table of 8. (consider 8 x 1 to 8 x 10). 

#include <stdio.h>

int main(){
    int num = 8;
    int sum = 0;

    for (int i = 1 ; i < 11 ; i++)
    {
        sum = sum + i*num;    
    }
    
    printf("\n the sum of multiplication table of 8 = %d",sum);
 
    return 0;
}