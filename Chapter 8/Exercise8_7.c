#include <stdio.h>

unsigned long int x_to_the_n(int x, int n)
{
   unsigned long int result = 1;

   for (int i = 1; i <= n; ++i)
   {
      result *= x;
   }

   return result;
}

int main(void)
{
   printf("%i to the %i is %lu\n", 5, 3, x_to_the_n(5, 3));
   printf("%i to the %i is %lu\n", 2, 10, x_to_the_n(2, 10));
   printf("%i to the %i is %lu\n", 4, 9, x_to_the_n(4, 9));

   return 0;
}
