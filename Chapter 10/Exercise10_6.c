#include <stdio.h>

void removeString(char text[], int start, int length)
{
   int replacementIndex = start + length;

   while (text[replacementIndex] != '\0')
   {
      text[start] = text[replacementIndex];
      start++;
      replacementIndex++;
   }

   text[start] = '\0';
}

int main(void)
{
   char text[] = "the wrong son";

   removeString(text, 4, 6);

   printf("%s\n", text);

   return 0;
}
