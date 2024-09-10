// What can be done using one type of loop can also be done using the other two 
// types of loops – true or false? 

// the answer is true hence we can perform same operation on the loop
#include <stdio.h>

int main(){
    int i;

    // by using for loop    
    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    // by using while loop
    i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    // by using do while loop
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}