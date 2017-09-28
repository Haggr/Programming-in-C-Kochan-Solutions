// Program to generate a table of prime numbers

#include <stdio.h>

int main(void)
{
   int   p, d;
   _Bool isPrime;

   // Print 2 because it is prime for sure and we need to skip it

   printf("2 ");
   for (p = 3; p <= 50; p += 2)
   {
      isPrime = 1;

      for (d = 3; d <= p / 2 && isPrime; d += 2)
      {
         if (p % d == 0)
         {
            isPrime = 0;
         }
      }

      if (isPrime != 0)
      {
         printf("%i ", p);
      }
   }

   printf("\n");
   return 0;
}
