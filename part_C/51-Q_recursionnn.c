// write a function to calculate percentage of a student from marks in science,maths and sanskrit

#include<stdio.h>

int calculatePercentage(int sci,int math,int sanskrit);

int main(){
int sci = 100;
int math = 98;
int sanskrit = 69;
printf("Percentage of your marks is : %d",calculatePercentage(sci,math,sanskrit));

return 0;
}

int calculatePercentage(int sci,int math,int sanskrit){
    return ((sci +  math +  sanskrit) / 3) ;
}