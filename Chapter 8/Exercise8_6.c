// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue(float x)
{
   if (x < 0)
   {
      x = -x;
   }
   return x;
}

// Function to compute the square root of a numbers

float squareRoot(double x)
{
   const double epsilon = .00000000001;
   double       guess   = 1.0;

   while (absoluteValue(guess * guess - x) >= epsilon)
   {
      guess = (x / guess + guess) / 2.0;
   }

   return guess;
}

int main(void)
{
   printf("squareRoot(2.0) = %.14f\n", squareRoot(2.0));
   printf("squareRoot(144.0) = %.14f\n", squareRoot(144.0));
   printf("squareRoot(17.5) = %.14f\n", squareRoot(17.5));

   return 0;
}