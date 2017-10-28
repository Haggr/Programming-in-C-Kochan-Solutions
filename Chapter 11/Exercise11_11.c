#include <stdio.h>
#include <stdbool.h>

struct date
{
   int month;
   int day;
   int year;
};

void dateUpdate(struct date * today)
{
   int numberOfDays(struct date d);

   if (today->day != numberOfDays(*today))
   {
      today->day++;
   }
   else if (today->month == 12)
   {
      today->day   = 1;
      today->month = 1;
      today->year++;
   }
   else
   {
      today->day = 1;
      today->month++;
   }
}

int numberOfDays(struct date d)
{
   int days;

   bool isLeapYear(struct date d);

   const int daysPerMonth[12] =
   		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (isLeapYear && d.month == 2)
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}

bool isLeapYear(struct date d)
{
	bool leapYearFlag;

	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}

int main(void)
{
	struct date today;

	printf("Enter today's date (mm dd yyyy): ");
	scanf("%i%i%i", &today.month, &today.day, &today.year);

	dateUpdate(&today);

	printf("Tomorrow's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

	return 0;
}
