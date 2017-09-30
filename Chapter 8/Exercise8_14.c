/**
 * Only the previous exercise, Exercise8.13 is done here.
 * I didn't want to do all four.
 */


// Program to sort an array of integers into ascending order

#include <stdio.h>

int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };

int n = 16;

int order = 0;

void sort(void)
{
   int i, j, temp;

   for (i = 0; i < n - 1; ++i)
   {
      for (j = i + 1; j < n; ++j)
      {
         if (order == 0)
         {
            if (array[i] > array[j])
            {
               temp     = array[i];
               array[i] = array[j];
               array[j] = temp;
            }
         }
         else if (order == 1)
         {
            if (array[i] < array[j])
            {
               temp     = array[i];
               array[i] = array[j];
               array[j] = temp;
            }
         }
      }
   }
}

int main(void)
{
   int i;

   void sort();

   printf("The array before the sort:\n");

   for (i = 0; i < 16; ++i)
   {
      printf("%i ", array[i]);
   }

   sort();

   printf("\n\nThe array after the ascending sort:\n");
   for (i = 0; i < 16; ++i)
   {
      printf("%i ", array[i]);
   }

   order = 1;
   sort();

   printf("\n\nThe array after the descending sort:\n");
   for (i = 0; i < 16; ++i)
   {
      printf("%i ", array[i]);
   }

   printf("\n");

   return 0;
}
