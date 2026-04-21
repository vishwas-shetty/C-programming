#include <stdio.h>

void printHello(); // function DECLARATION/PROTOCALL

int main()
{
    printHello(); // function CALL
    printHello(); // -->Now we are calling the function to print Hello V! three times
    printHello();
    return 0;
}

void printHello()
{
    printf("Hello V! \n"); // function DEFINITION
}

// function are very important ,,this helps us to write the 1000 lines codes in a short and trim manner !!
