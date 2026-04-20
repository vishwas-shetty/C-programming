#include <stdio.h>

int main()
{

    // INCREMENT OPERATOR --> have 4 types
    // ++i & i++
    // --i & i--

    // 1) Post increment
    // int i = 1;
    // printf("%d \n", i++); // i++ -->use ,then increase!
    // printf("%d \n", i);

    // 2) Pre increment
    // int i=1;
    // printf("%d \n", ++i); // ++i -->increase,then use!
    // printf("%d \n", i);

    // 3) Pre decrement
    // int i=1;
    // printf("%d \n", --i); // --i -->decrease,then use!
    // printf("%d \n", i);

    // 4) Post decrement
    int i=1;
    printf("%d \n", i--); // i-- --> use,them decrease!
    printf("%d \n", i);

    return 0;
}

// loop counter can be float (or) even character