#include <stdio.h>

int main(void)
{
   printf("%3s\t%s\n", "n", "Value");
   printf("%s\t%s\n", "_____", "_____");

   for (int i = 5; i <= 50; i += 5)
   {
      printf("%5i\t%5i\n", i, i * (i + 1) / 2);
   }

   return 0;
}
