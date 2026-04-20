// Q) write a program to check if a number is divisible by 2 or not.

#include <stdio.h>

int main()
{
    int x;
    printf(" Enter a number ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);  // here,, basically we have combined airthmetic operator and realtional operator 
                               // and the outcome will come in 1 or 0 ,, where 1 represents true and 0 represents false 

    return 0;
}