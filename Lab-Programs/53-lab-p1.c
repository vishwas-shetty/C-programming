/* Write a C program to determine whether a given number is Even or Odd:
1. Using if-else statement.
2. Without using else statement.
*/

// 1.Using if else
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("The number is Even");
    else
        printf("The number is Odd");

    return 0;
}

// 2.using wihtout if else
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("The number is Even");

    if (num % 2 != 0)
        printf("The number is Odd");

    return 0;
}