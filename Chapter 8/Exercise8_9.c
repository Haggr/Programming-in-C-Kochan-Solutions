#include <stdio.h>


unsigned int gcd(unsigned int u, unsigned int v)
{
   unsigned int temp;

   while (v != 0)
   {
      temp = u % v;
      u    = v;
      v    = temp;
   }

   return u;
}

unsigned int lcm(unsigned int u, unsigned int v)
{
   return u * v / gcd(u, v);
}

int main(void)
{
   printf("lcm(%i,%i) = %i\n", 15, 10, lcm(15, 10));
   printf("lcm(%i,%i) = %i\n", 75, 10, lcm(75, 10));
   printf("lcm(%i,%i) = %i\n", 13, 47, lcm(13, 47));

   return 0;
}
