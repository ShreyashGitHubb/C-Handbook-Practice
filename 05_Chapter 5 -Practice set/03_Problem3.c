// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.

#include <stdio.h>

float ForceOfAttraction(float m){
    float g = 9.8;
    return m * g; // f = m * g
}

int main(){
    float m;
    printf("\n Enter the mass of the body exerted by the earth : ");
    scanf("%f",&m);

    printf("\n Force of attraction = %.2f", ForceOfAttraction(m));
    return 0;
}