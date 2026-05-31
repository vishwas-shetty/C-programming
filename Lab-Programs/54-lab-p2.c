// Write a C program to check whether a given character is an uppercase letter, a lowercase letter, or an invalid character.

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase letter");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase letter");
    else
        printf("Invalid character");

    return 0;
}