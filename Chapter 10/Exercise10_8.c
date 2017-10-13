#include <stdio.h>

void replaceString(char source[], char s1[], char s2[]);
void insertString(char source[], char s[], int i);
int stringLength(char str[]);
int findString(char source[], char search[]);
void removeString(char text[], int start, int length);

int main(void)
{
	char text[50] = "i have more than 1 brains"; 		// what?

	printf("%s\n", text);
	replaceString(text, "1", "one");
	printf("%s\n", text);

	char moretext[] = "did you learn about pointers yet? they look like *somePtr";
	printf("%s\n", moretext);

	replaceString(moretext, "*", "");
	printf("%s\n", moretext);


	return 0;
}

void replaceString(char source[], char s1[], char s2[])
{
	int index = findString(source, s1);

	if (index == -1)
	{
		return;
	}

	removeString(source, index, stringLength(s1));

	insertString(source, s2, index);
}

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
