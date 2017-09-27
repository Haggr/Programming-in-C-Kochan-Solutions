#include <stdio.h>

int main(void)
{
   // Functions are not yet introduced
   // so we follow the dumb path again

   int i = 365, j = 7;

   printf("Next multiple for i = %i and j = %i is %i\n",
          i, j, i + j - i % j);

   i = 12258, j = 23;
   printf("Next multiple for i = %i and j = %i is %i\n",
          i, j, i + j - i % j);

   i = 996, j = 4;
   printf("Next multiple for i = %i and j = %i is %i\n",
          i, j, i + j - i % j);

   return 0;
}
