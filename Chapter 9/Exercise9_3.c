#include <stdio.h>

struct time
{
   int hour;
   int minute;
   int second;
};

struct time elapsed_time(struct time time1, struct time time2)
{
   struct time result;

   int seconds2 = time2.hour * 3600 + time2.minute * 60 + time2.second;
   int seconds1 = time1.hour * 3600 + time1.minute * 60 + time1.second;

   int diff = (seconds2 - seconds1 < 0)
              ? (seconds2 - seconds1 + 24 * 3600) : seconds2 - seconds1;

   result.second = diff % 60;
   diff         /= 60;
   result.minute = diff % 60;
   result.hour   = diff / 60;

   return result;
}

int main(void)
{
   struct time time1 = { 3, 45, 15 };
   struct time time2 = { .hour = 9, .second = 3, .minute = 44 };

   struct time elapsed = elapsed_time(time1, time2);

   printf("The elapsed time is %i:%i:%i\n", elapsed.hour, elapsed.minute, elapsed.second);

   time1 = (struct time) {21, 45, 15 };
   time2 = (struct time) {.hour = 2, .second = 3, .minute = 44 };

   elapsed = elapsed_time(time1, time2);
   printf("The elapsed time is %i:%i:%i\n", elapsed.hour, elapsed.minute, elapsed.second);
}
