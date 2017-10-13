#include <stdio.h>

int numOfDigits(int num);
void intToStr(int intValue, char str[]);

void intToStr(int intValue, char str[])
{
   // int can be at most 32 bits which is 10 digits in decimal
   // 1 for the possible - sign and 1 for the NUL char
   int startingIndex = 0;
   int i;

   if (intValue < 0)
   {
      str[0]        = '-';
      intValue     *= -1;
      startingIndex = 1;
   }

   i      = numOfDigits(intValue) + startingIndex;
   str[i] = '\0';

   for (; i > startingIndex; --i, intValue /= 10)
   {
      str[i - 1] = 48 + (intValue % 10);
   }
}

int numOfDigits(int num)
{
   int numOfDigits = 0;

   while (num != 0)
   {
      num /= 10;
      ++numOfDigits;
   }

   return numOfDigits;
}

int main(int argc, char const *argv[])
{
   char str[12];

   intToStr(1234 * 4, str);
   printf("%s\n", str);
   intToStr(-252355, str);
   printf("%s\n", str);

   return 0;
}
