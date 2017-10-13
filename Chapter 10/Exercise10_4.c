#include <stdio.h>

void substring(char source[], int start, int count, char result[])
{
   int i = 0;

   char current = source[start];

   while (current != '\0' && i != count)
   {
      result[i] = source[start + i];
      i++;
   }

   result[i] = '\0';
}

int main(void)
{
   char result[20];

   substring("character", 4, 3, result);
   printf("%s\n", result);

   substring("two words", 4, 20, result);
   printf("%s\n", result);

   return 0;
}
