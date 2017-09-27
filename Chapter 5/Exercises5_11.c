/*
 * Even though it says "The program should accept
 * any arbitrary integer typed in by the user"
 * and 'any arbitrary integer' includes negative
 * numbers as well, without using any if statement
 * or bit shifting I couldn't find any way to make
 * it work for negative numbers.
 */

#include <stdio.h>

int main(void)
{
   int number, sum;

   printf("Enter a number: ");
   scanf("%i", &number);

   sum = 0;

   do
   {
      sum    += number % 10;
      number /= 10;
   } while (number != 0);

   printf("The sum of the digits are %i\n", sum);

   return 0;
}
