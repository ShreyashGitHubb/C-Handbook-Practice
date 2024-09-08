// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;

    printf("\n enter four numbers : ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        printf("\n %d is the greatest number ", n1);
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        printf("\n %d is the greatest number ", n2);
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        printf("\n %d is the greatest number ", n3);
    }
    else
    {
        printf("\n %d is the greatest number ", n4);
    }

    return 0;
}