#include <stdio.h>

void insertString(char source[], char s[], int i);
int stringLength(char str[]);

void  insertString(char source[], char s[], int i)
{
   int j, lenS, lenSource;

   lenSource = stringLength(source);
   lenS      = stringLength(s);

   if (i > lenSource)
   {
      return;
   }

   for (j = lenSource; j >= i; --j)
   {
      source [lenS + j] = source [j];
   }

   for (j = 0; j < lenS; ++j)
   {
      source [j + i] = s[j];
   }
}

int stringLength(char str[])
{
   int length = 0;

   while (str[length++]);
   return length - 1;
}

int main(void)
{
   char text[50] = "the wrong son";

   printf("%s\n", text);

   insertString(text, "per", 10);

   printf("%s\n", text);
   return 0;
}
