/*
 * Because the book hasn't taught how to store strings,
 * or how to use functions or stacks etc. and I couldn't find a way to read the number from left to right, I use the following algorithm:
 *
 * - Read the integer
 * - Reverse the integer very similar to Exercise6_5
 * but instead of printing, store it
 * - Use the technique presented in this chapter to obtain
 * the digits from right to left
 * - Print each of them as you extract it
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   int  number, reversedNumber = 0;
   bool endsWithZero = false;

   printf("Enter an integer: ");
   scanf("%i", &number);

   // Because if the number ends with zero, reversed is going to have its first
   // digit as 0 and it's going to be omitted, we make sure that we remember it
   // so that we can add it afterwards
   endsWithZero = (number % 10 == 0) ? true : false;

   // Reversing the number first

   if (number < 0)
   {
      number = -number;
   }

   do
   {
      reversedNumber *= 10;
      reversedNumber += number % 10;
      number         /= 10;
   } while (number != 0);


   // End of reversing it


   do
   {
      switch (reversedNumber % 10)
      {
      case 0:
         printf("zero");
         break;

      case 1:
         printf("one");
         break;

      case 2:
         printf("two");
         break;

      case 3:
         printf("three");
         break;

      case 4:
         printf("four");
         break;

      case 5:
         printf("five");
         break;

      case 6:
         printf("six");
         break;

      case 7:
         printf("seven");
         break;

      case 8:
         printf("eight");
         break;

      case 9:
         printf("nine");
         break;
      }

      printf(" ");
      reversedNumber /= 10;
   } while (reversedNumber != 0);

   if (endsWithZero)
   {
      printf("zero");
   }

   printf("\n");
   return 0;
}
