#include <stdio.h>

int main(void)
{
   const int n = 150;
   int       P[n];

   for (int i = 0; i < n; ++i)
   {
      P[i] = 0;
   }

   printf("Prime numbers up to 150:\n");
   for (int i = 2; i <= n; ++i)
   {
      if (P[i] == 0)
      {
         printf("%i ", i);

         for (int j = 1; i * j <= n; ++j)
         {
            P[i * j] = 1;
         }
      }
   }

   printf("\n");
   return 0;
}
