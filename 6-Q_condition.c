// Write a progra, to find if a a character entered by user is upper case or not

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a letter \n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf(" It is UPPER CASE");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf(" it is lower case");
    }
    else
    {
        printf(" Not an english alphabet");
    }
    return 0;
}