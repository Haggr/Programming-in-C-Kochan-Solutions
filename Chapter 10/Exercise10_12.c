#include <stdio.h>

float strToFloat(const char str[]);
int power(int base, int exp);
int strToInt(const char string[]);
int findString(const char source[], const char search[]);

float strToFloat(const char str[])
{
   int index = findString(str, ".");

   if (index == -1)  // Means that the number is not floating point
   {
      return strToInt(str);
   }

   float floatValue = strToInt(str);    // Gets the integer part's value

   int i;
   int factor;

   for (i = index + 1, factor = (floatValue < 0) ? -10 : 10;
        str[i] >= '0' && str[i] <= '9';
        ++i, factor *= 10)
   {
      floatValue += 1.0 * (str[i] - '0') / factor;
   }

   return floatValue;
}

int power(int base, int exp)
{
   int i, result = base;

   for (i = 1; i <= exp / 2; i *= 2)
   {
      result *= result;
   }

   while (exp != i++)
   {
      result *= base;
   }

   return result;
}

int strToInt(const char string[])
{
   int i, intValue, result = 0, sign;

   sign = (string[0] == '-') ? -1 : 1;

   for (i = (string[0] == '-') ? 1 : 0; string[i] >= '0' && string[i] <= '9'; ++i)
   {
      intValue = string[i] - '0';
      result   = result * 10 + intValue;
   }

   return sign * result;
}

int findString(const char source[], const char search[])
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

	printf("%f\n", strToFloat("245"));
	printf("%f\n", strToFloat("245.2342"));
	printf("%f\n", strToFloat("245.2342") * 3);
	printf("%f\n", strToFloat("-128.2511"));

   return 0;
}
