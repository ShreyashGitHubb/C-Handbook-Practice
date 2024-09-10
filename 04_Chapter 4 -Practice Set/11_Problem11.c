// Implement 10 using other types of loops. 

#include <stdio.h>

int main()
{
    int num;
    int isprime = 1;

    printf("\n enter the number : ");
    scanf("%d", &num);

    if (num == 0 || num == 1){
        isprime = 0;
    }
    else{
        int i = 2;
        // while (i < num)
        // {
        //     if (num % i == 0 && num != 2)
        //     {
        //         isprime = 0;
        //         break;
        //     }
        //     i++;
        // }

        do{
            if (num % i == 0 && num != 2)
            {
                isprime = 0;
                break;
            }
            i++;
        }while (i < num);
    }

    if (isprime == 1){
        printf("\n entered number is prime");
    }
    else{
        printf("\n entered number is not prime");
    }

    return 0;
}