// Write a program to check if a student passed or failed ?
// marks>30 is pass 
// marks<=30 is fail 

#include <stdio.h>

int main()
{
    int marks;
    printf("enter number(0-100) : ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 30)  // this is conditon 1
    {
        printf("FAIL \n");
    }
    else if (marks > 30 && marks <= 100) // this is conditon 2
    {
        printf("PASS \n");
    }
    else
    {
        printf("wrong marks");  // if marks entered is more than 100 than it will be printed 
    }

    return 0;
}


/* this is ternary conditional operator (can be used for simple condition).
 marks <= 30 ? printf("FAIL \n") : printf("PASS \n");
 */