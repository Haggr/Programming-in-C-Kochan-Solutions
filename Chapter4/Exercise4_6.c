#include <stdio.h>

int main(void)
{
   double x = 2.55;

   // The book has not shown how to take
   // powers, thus it's using brute force.
   printf("For x = 2.55,\n\n"
          "3x^3 - 5x^2 + 6 = %g\n",
          3 * x * x * x - 5 * x * x + 6);

   return 0;
}
