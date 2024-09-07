// 3. Write a program to check whether a number is divisible by 97 or not. 

#include <stdio.h>

int main(){
    int num ;

    printf("\n enter the number : ");
    scanf("%d",&num);

    if (num % 97 == 0){
        printf("\n %d number is divisible by 97 ", num);
    }
    else{
        printf("\n %d number is not divisible by 97 ", num);
    }
    
    return 0;
}