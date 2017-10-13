#include <stdio.h>

void uppercase(char str[])
{
   int i;

   for (i = 0; str[i]; ++i)
   {
      if (str[i] >= 'a' && str[i] <= 'z')
         str[i] += 'A' - 'a';
   }
}

int main(int argc, char const *argv[])
{
   char text[] = "I have more than 8 brains";

   printf("Before:\n%s\n", text);
   uppercase(text);
   printf("After:\n%s\n", text);


   return 0;
}
