#include <stdio.h>

int main(void)
{
   int num1, num2;

   printf("Enter two integers: ");
   scanf("%i%i", &num1, &num2);

   if (num2 == 0)
   {
      printf("Division by zero!\n");
   }

   printf("%.3f\n", (float)num1 / num2);

   return 0;
}
