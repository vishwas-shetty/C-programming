#include <stdio.h>

int main()
{
   for (int i = 1; ;i++)
   {
      printf("Hello V \n");
   }

   return 0;
}

// since the termination is absent ,,  it will create infinite loops and causing it print infinite untill the memory fulls
// So ..it is kind of error and dont create infinite loop 