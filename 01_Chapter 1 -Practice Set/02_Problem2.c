#include <stdio.h>

int main(){
    int radius = 6;
    int height = 10;

    printf("\nThe area of the circle wiht the radius %d is %.2f ",radius, 3.14*radius*radius);
    printf("\nThe volume of a cylinder with %d reaius and %d height is %.2f ",radius, height, 3.14*radius*radius*height);
    
    return 0;
}