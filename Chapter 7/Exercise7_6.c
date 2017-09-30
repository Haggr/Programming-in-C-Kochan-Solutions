// Program to generate the first 15 Fibonacci numbers


// Note: The question asks you to use three variables
// but I went ahead and used only two.
#include <stdio.h>

int main(void)
{
   int former, latter;

   former = 0;          // by definition
   latter = 1;          // ditto

   for (int i = 2; i < 15; ++i)
   {
      printf("%i\n", (latter += former));
      former = latter - former;
   }

   return 0;
}
