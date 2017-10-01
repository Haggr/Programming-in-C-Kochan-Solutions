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

   struct date firstDate, secondDate;
   printf("Enter the first date (mm dd yyyy): ");
   scanf("%i%i%i", &firstDate.month, &firstDate.day, &firstDate.year);

   printf("Enter the second date (mm dd yyyy): ");
   scanf("%i%i%i", &secondDate.month, &secondDate.day, &secondDate.year);

   printf("The number of days between the dates is %i\n",
          getN(secondDate) - getN(firstDate));
   return 0;
}
