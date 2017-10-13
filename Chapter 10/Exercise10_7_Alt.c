#include <stdio.h>

void insertString(char source[], char insertion[], int index)
{
   int i = 0;

   while (insertion[i])
   {
      int  j;
      char temp1 = source[index];
      char temp2;
      for (j = index; temp1; ++j)
      {
         temp2         = source[j + 1];
         source[j + 1] = temp1;
         temp1         = temp2;
      }

      source[j + 1]   = '\0';
      source[index++] = insertion[i++];
   }
}

int main(void)
{
   char text[50] = "the wrong son";

   printf("%s\n", text);

   insertString(text, "per", 10);

   printf("%s\n", text);
   return 0;
}
