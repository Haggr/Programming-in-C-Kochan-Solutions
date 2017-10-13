// Dictionary lookup program

#include <stdio.h>

struct entry
{
   char word[15];
   char definition[50];
};

int compareString(const char s1[], const char s2[]);

void dictionarySort(struct entry dictionary[], int entries)
{
   for (int i = 0; i < entries; ++i)
   {
      int index = i;
      for (int j = i; j < entries; ++j)
      {
         if (compareString(dictionary[index].word, dictionary[j].word) == 1)
         {
            index = j;
         }
      }

      struct entry temp = dictionary[i];
      dictionary[i]     = dictionary[index];
      dictionary[index] = temp;
   }
}

// Function to compare two character strings

int compareString(const char s1[], const char s2[])
{
   int i = 0, answer;

   while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
   {
      ++i;
   }

   if (s1[i] < s2[i])
   {
      answer = -1;
   }
   else if (s1[i] == s2[i])
   {
      answer = 0;
   }
   else
   {
      answer = 1;
   }

   return answer;
}

int lookup(const struct entry dictionary[], const char search[],
           const int entries)
{
   int low  = 0;
   int high = entries - 1;
   int mid, result;

   int compareString(const char s1[], const char s2[]);

   while (low <= high)
   {
      mid = (high + low) / 2;

      result = compareString(dictionary[mid].word, search);
      if (result == -1)
      {
         low = mid + 1;
      }
      else if (result == 1)
      {
         high = mid - 1;
      }
      else
      {
         return mid;
      }
   }

   return -1;
}

void printDictionary(struct entry dictionary[], int entries)
{
   for (int i = 0; i < entries; ++i)
   {
      printf("%-18s%s\n", dictionary[i].word, dictionary[i].definition);
   }
}

int main(void)
{
   struct entry dictionary[100] =
   {
      { "ajar",     "partially opened"                  },
      { "aardvark", "a burrowing African mammal"        },
      { "ahoy",     "a nautical call of greeting"       },
      { "abyss",    "a bottomless pit"                  },
      { "acumen",   "mentally sharp; keen"              },
      { "addle",    "to become confused"                },
      { "aerie",    "a high nest"                       },
      { "affix",    "to append; attach"                 },
      { "agar",     "a jelly made from seaweed"         },
      { "aigrette", "an ornamental cluster of feathers" }
   };

   char word[15];
   int  entries = 10;
   int  entry;

   int lookup(const struct entry dictionary[], const char search[],
              const int entries);

   printDictionary(dictionary, entries);

   dictionarySort(dictionary, entries);

   printf("---------------------------------\n");
   printDictionary(dictionary, entries);

   return 0;
}
