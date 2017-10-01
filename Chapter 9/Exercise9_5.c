#include <stdio.h>
#include <stdbool.h>

struct dateAndTime clockKeeper(struct dateAndTime dt);
struct time        timeUpdate(struct time now);
struct date        dateUpdate(struct date today);
void               displayDateAndTime(struct dateAndTime dt);

struct date
{
   int month;
   int day;
   int year;
};

struct time
{
   int hour;
   int minute;
   int second;
};

struct dateAndTime
{
   struct date sdate;
   struct time stime;
};

int main(void)
{
   struct dateAndTime sample1 = { { 01, 17, 2018 }, { 23, 59, 59 } };

   displayDateAndTime(sample1);

   sample1 = clockKeeper(sample1);

   displayDateAndTime(sample1);

   return 0;
}

void displayDateAndTime(struct dateAndTime dt)
{
   printf("Now: %.2i:%.2i:%.2i  %.2i/%.2i/%.2i\n", dt.stime.hour,
          dt.stime.minute, dt.stime.second, dt.sdate.month, dt.sdate.day, dt.sdate.year);
}

struct dateAndTime clockKeeper(struct dateAndTime dt)
{
   dt.stime = timeUpdate(dt.stime);

   if (dt.stime.hour == 0 && dt.stime.minute == 0 &&
       dt.stime.second == 0)
   {
      dt.sdate = dateUpdate(dt.sdate);
   }

   return dt;
}

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
      tomorrow = (struct date){1, 1, today.year + 1 };
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

// Function to update the time by one second
struct time timeUpdate(struct time now)
{
   ++now.second;

   if (now.second == 60)
   {
      now.second = 0;
      ++now.minute;

      if (now.minute == 60)
      {
         now.minute = 0;
         ++now.hour;

         if (now.hour == 24)
         {
            now.hour = 0;
         }
      }
   }

   return now;
}
