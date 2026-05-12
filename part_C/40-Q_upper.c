// Q) Write a Program to find if a character entered by user is upper case or not ?

#include <stdio.h>

int main()
{
    char ch;
    printf("enter character : ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("lower case \n");
    }
    // ch >=97 or ch >= 'a' --> both are same and complier knows that meaning.
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("upper case \n");
    }
    else
    {
        printf("not english letter \n");
    }
    return 0;
}