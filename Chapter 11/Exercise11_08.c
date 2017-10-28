#include <stdio.h>

void sort3(int * i1, int * i2, int * i3)
{
   if (*i1 > *i2)
   {
      int temp = *i2;
      *i2 = *i1;
      *i1 = temp;
   }

   if (*i2 > *i3)
   {
      int temp = *i2;
      *i2 = *i3;
      *i3 = temp;
   }

   if (*i1 > *i2)
   {
      int temp = *i2;
      *i2 = *i1;
      *i1 = temp;
   }
}

int main(void)
{
   int i1 = 182, i2 = 13, i3 = 31;

   printf("i1 = %i, i2 = %i, i3 = %i\n", i1, i2, i3);

	sort3(&i1, &i2, &i3);

	printf("i1 = %i, i2 = %i, i3 = %i\n", i1, i2, i3);

	return 0;
}
