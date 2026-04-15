#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // (or) SKIP!
        }
        printf("%d \n", i);
    }
    return 0;
}