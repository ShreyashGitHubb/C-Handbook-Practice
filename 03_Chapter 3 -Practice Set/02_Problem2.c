// Write a program to determine whether a student has passed or failed. To pass, a 
// student requires a total of 40% and at least 33% in each subject. Assume there 
// are three subjects and take the marks as input from the user. 

#include <stdio.h>

int main(){
    int sub1 ,sub2 ,sub3 ;

    printf("\nEnter the marks of subject 1 : ");
    scanf("%d",&sub1);
    printf("\nEnter the marks of subject 2 : ");
    scanf("%d",&sub2);
    printf("\nEnter the marks of subject 3 : ");
    scanf("%d",&sub3);

    printf("\n the marks are %d, %d and %d ",sub1,sub2,sub3);

    if (sub1 <= 33 || sub2 <= 33 || sub3 <= 33)
    {
        printf("\n you are failed due to less marks in individual subject");
    }
    else if ((sub1 + sub2 + sub3)/3 < 40)
    {
        printf("\n you are failed due to less precentage");
    }
    else
    {
        printf("\n you are passed ! ");
    }
    
    return 0;
}