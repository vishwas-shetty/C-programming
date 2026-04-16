// Print all the odd numbers from 5 to 50?

#include <stdio.h>

int main()
{
    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 != 0) // If the remainder is not 0, then it's an odd number. [6 % 2 = 0] & [5 % 2 = 1]
        {
            printf("%d \n", i);
        }
    }

    return 0;
}