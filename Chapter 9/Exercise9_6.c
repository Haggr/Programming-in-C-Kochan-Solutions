// Program to determine tomorrow's date

#include <stdio.h>
#include <stdbool.h>

struct date
{
   int month;
   int day;
   int year;
};

// Function to calculate tomorrow's date

struct date dateUpdate(struct date today)
{
   struct date tomorrow;

   int numberOfDays(struct date d);

   if (today.day != numberOfDays(today))
   {
      tomorrow = (struct date) {today.month, today.day + 1, today.year };
   }
   else if (today.month == 12)
   {
      tomorrow = (struct date) {1, 1, today.year + 1 };
   }
   else
   {
      tomorrow = (struct date) {today.month + 1, 1, today.year };
   }

   return tomorrow;
}

// Function tofind the number of days in a month

int numberOfDays(struct date d)
{
   int days;

   bool isLeapYear(struct date d);

   const int daysPerMonth[12] =
   { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   if (isLeapYear && d.month == 2)
   {
      days = 29;
   }
   else
   {
      days = daysPerMonth[d.month - 1];
   }

   return days;
}

// Function determine if it's a leap year

bool isLeapYear(struct date d)
{
   return (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0;
}

int main(void)
{
   struct date dateUpdate(struct date today);

   struct date thisDay, nextDay;

   printf("Enter today's date (mm dd yyyy): ");
   scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

   nextDay = dateUpdate(thisDay);

   printf("Tomorrows date is %i/%i/%.2i.\n", nextDay.month, nextDay.day,
          nextDay.year % 100);

   return 0;
}
