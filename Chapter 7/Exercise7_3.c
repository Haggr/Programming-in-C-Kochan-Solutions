#include <stdio.h>

int main(void)
{
   int ratingCounters[11], i, response;

   for (i = 1; i <= 10; ++i)
   {
      ratingCounters[i] = 0;
   }

   printf("Enter your responses (999 to exit)\n");

   while (1)
   {
      scanf("%i", &response);

      if (response == 999)
      {
         break;
      }
      if (response < 1 || response > 10)
      {
         printf("bad response: %i\n", response);
      }
      else
      {
         ++ratingCounters[response];
      }
   }

   printf("\n\nRating   Number of Responses\n");
   printf("------    -------------------\n");

   for (i = 1; i <= 10; ++i)
   {
      printf("%4i%14i\n", i, ratingCounters[i]);
   }
   return 0;
}
