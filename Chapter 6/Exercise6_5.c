#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   int  number;
   bool isNegative = false;

   printf("Enter your number\n");
   scanf("%i", &number);

   if (number < 0)
   {
      isNegative = true;
      number     = -number;
   }

   do
   {
      printf("%i", number % 10);
      number /= 10;
   } while (number != 0);

   if (isNegative)
   {
      printf("-");
   }
   printf("\n");

   return 0;
}
