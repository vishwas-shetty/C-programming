// Write a program to check if a number is even or odd ?

#include <stdio.h>

int main()
{
    int x;
    printf("enter a number :");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    // Even --> 1
    // Odd --> 0

    return 0;
}