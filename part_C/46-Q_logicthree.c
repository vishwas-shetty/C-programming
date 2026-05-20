#include <stdio.h>

int main()
{
    int x = 2;

    // Q) write this code?
    if (x = 1)
    {
        printf("x is equal to 1 \n");
        printf("%d \n", x);
    }
    else
    {
        printf("x is not equal to 1");
    }

    return 0;
}

// no errors for this
// the logic here is ,, our int is 2..but the value of x is replaced by 1 instead of 2 in memory location.