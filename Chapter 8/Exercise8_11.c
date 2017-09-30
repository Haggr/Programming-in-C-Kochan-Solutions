#include <stdio.h>

int arraySum(int array[], int length)
{
   int result = 0;

   for (int i = 0; i < length; ++i)
   {
      result += array[i];
   }

   return result;
}

int main(void)
{
   int array[] = { 3, 5, 23, 234, 123, 21, 5, -34, -11 };

   printf("%i\n", arraySum(array, 9));
}
