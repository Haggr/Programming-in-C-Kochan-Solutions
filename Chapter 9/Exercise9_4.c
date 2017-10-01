#include <stdio.h>

struct date
{
   int month;
   int day;
   int year;
};

int getN(struct date d)
{
   int f = (d.month <= 2) ? d.year - 1 : d.year;
   int g = (d.month <= 2) ? d.month + 13 : d.month + 1;

   return 1461 * f / 4 + 153 * g / 5 + d.day;
}

int main(void)
{
   int getN(struct date d);

   struct date d;
   printf("Enter the date (mm dd yyyy): ");
   scanf("%i%i%i", &d.month, &d.day, &d.year);

   char days[7][9] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

   printf("Day of the week on %i/%i/%.2i is %s\n", d.month, d.day, d.year % 100, days[(getN(d) - 621049) % 7]);

   return 0;
}
