// Write a program to determine whether a character entered by the user is 
// lowercase or not. 

#include <stdio.h>

int main(){
    char ch;

    printf("\n enter the character : ");
    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("\n the entered character is in lowercase ");
    }
    else{
        printf("\n the emtered character is not in lowercase");
    }

    return 0;
}