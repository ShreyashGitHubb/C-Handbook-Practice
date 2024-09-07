// 1. Which of the following is invalid in C? 
//      a. int a=1; int b = a;    
//      b. int v = 3*3; 
//      c. char dt = ‘21 dec 2020’; 


//  this is the correct C decleration and initilization   a. int a=1; int b = a;    

//  this is also the correct C decleration and initilization   b. int v = 3*3; 

//  this is invalid C decleration and initilization   c. char dt = ‘21 dec 2020’;
#include <stdio.h>

int main(){
    int a = 1;
    int b = a;
    int v = 3*3;
    // char dt = '21 dec 2024'; // this is invalid because it can only store only one single character
    return 0;
}