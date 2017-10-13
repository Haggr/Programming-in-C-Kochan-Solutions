#include <stdio.h>

int findString(char source[], char search[])
{
   int index = 0;
   int i;

   for (int index = 0; source[index] != '\0'; ++index)
   {
      i = 0;
      while (source[index + i] == search[i] && search[i] != '\0')
      {
         i++;
      }


      if (search[i] == '\0')
      {
         return index;
      }
   }

   return -1;
}

int main(void)
{
   int index;

   index = findString("a chatterbox", "hat");
   printf("%i\n", index);

   index = findString("hell", "hello");
   printf("%i\n", index);

   index = findString("hello", "low");
   printf("%i\n", index);

   index = findString("hello", "hell");
   printf("%i\n", index);


   return 0;
}
