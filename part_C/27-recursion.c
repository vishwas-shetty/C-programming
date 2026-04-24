// Print 27 times V's ARC

#include<stdio.h>

void printHV(int count);

int main(){
    printHV(27);
    return 0;
}

// RECURSIVE F(X)
void printHV(int count)
{
    if(count == 0){
        return;
    }
    printf("V's ARC \n");
    printHV(count-1);
}

