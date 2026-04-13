#include <stdio.h>
#include <math.h>

int main()
{
    int b, c;
    b = c = 1;
    int a = b + c;
    int power = b ^ c;
    printf("%d", power);
    return 0;
}
/* this is INVALID way to use airthmetic instruction interms of representation of power of b to c
      instead we should use power fuction which comes under #include<stdio.h> */



// We should program like this interms of power variable ,, we should use pow(x,y,..)
#include <stdio.h>
#include <math.h>

int main()
{
    int b, c;
    b = c = 1;
    int a = b + c;
    int power = pow(b, c);
    printf("%d", power);
    return 0;
}