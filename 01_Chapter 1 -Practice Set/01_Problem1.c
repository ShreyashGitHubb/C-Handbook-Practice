#include <stdio.h>

int main(){
    // by using the hard coded inputs
    /*
    int length = 10, breadth = 20;
    printf("\n The area of the rectangle : %d", length*breadth);
    */
    
    // by using the input supplied by the user
    int length , breadth;

    printf("\nEnter the length of the rectangle : ");
    scanf("%d",&length);

    printf("\nEnter the breadth of the rectangle : ");
    scanf("%d",&breadth);

    printf("\n The area of the rectangle : %d", length*breadth);
    return 0;
}