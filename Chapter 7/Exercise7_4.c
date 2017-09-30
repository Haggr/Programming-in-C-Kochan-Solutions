#include <stdio.h>

int main(void)
{
   float sum = 0, value;

   printf("Enter 10 values: ");

   for (int i = 0; i < 10; ++i)
   {
      scanf("%f", &value);
      sum += value;
   }

   printf("The average of the 10 numbers you've entered is %g\n", sum / 10);
   return 0;
}
