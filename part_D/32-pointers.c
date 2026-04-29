#include<stdio.h>

int main(){
    int age = 27;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d\n", _age);

    //addreess for pointers
    printf("%p \n", &age);
     printf("%u \n", &age);
     printf("%u\n", ptr);
     printf("%u \n", &ptr);

     //Values 
     printf("%d \n", age);
     printf("%d\n", *ptr);
     printf("%d \n", *(&age));
     return 0;
}


