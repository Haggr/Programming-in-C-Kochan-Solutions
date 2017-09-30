#include <stdio.h>

int prime(int number)
{
   int prime = 1;

   for (int i = 2; prime && i <= number / 2; ++i)
   {
      if (number % i == 0)
      {
         prime = 0;
      }
   }

   return prime;
}

int main(void)
{
   printf("prime(10) = %i\n", prime(10));
   printf("prime(13) = %i\n", prime(13));
   printf("prime(49) = %i\n", prime(49));
   printf("prime(47) = %i\n", prime(47));

   return 0;
}
