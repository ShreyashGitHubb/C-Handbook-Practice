// Write a program to convert Celsius (Centigrade degrees temperature to 
// Fahrenheit).
#include <stdio.h>

int main(){
    float c = 45.0 , f ;

    f = ((9.0*c)/5.0)+32;

    printf("\n %.2f degree celsis = %.2f degree fahrenheit",c,f);
 
    return 0;
}