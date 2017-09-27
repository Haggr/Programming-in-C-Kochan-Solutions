#include <stdio.h>

int main(void)
{
   printf("%2s\t%2s\n", "n", "n^2");
   printf("%2s\t%2s\n", "___", "___");

   for (int i = 1; i <= 10; i++)
   {
      printf("%2i\t%3i\n", i, i * i);
   }

   return 0;
}
