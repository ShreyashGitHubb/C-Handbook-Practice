// Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius){
    return (celsius * 9 / 5) + 32;
}

int main(){
    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Convert to Fahrenheit
    fahrenheit = celsiusToFahrenheit(celsius);
    
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    
    return 0;
}
