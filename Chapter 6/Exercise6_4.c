#include <stdio.h>

int main(void)
{
   float accumulator = 0;
   float number;
   char  op;

   printf("Begin Calculations\n");

   do
   {
      scanf("%f %c", &number, &op);

      switch (op)
      {
      case 'S':
         accumulator = number;
         break;

      case '+':
         accumulator += number;
         break;

      case '-':
         accumulator -= number;
         break;

      case '*':
         accumulator *= number;
         break;

      case '/':
         if (number == 0)
         {
            printf("Division by zero. Operation ignored\n");
         }
         else
         {
            accumulator /= number;
         }

         break;

      case 'E':
         break;

      default:
         printf("Invalid operator. No operation performed.\n");
         break;
      }

      printf("= %f\n", accumulator);
   } while (op != 'E');

   printf("End of Calculations\n");
   return 0;
}
