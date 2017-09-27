#include <stdio.h>

int main(void)
{
   int result = 1;

   for (int i = 1; i <= 10; i++)
   {
      result *= i;
      printf("%2i! = %i\n", i, result);
   }

   return 0;
}
