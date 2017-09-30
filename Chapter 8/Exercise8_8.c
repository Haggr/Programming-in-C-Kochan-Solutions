#include <stdio.h>

float absoluteValue(float x);
float squareRoot(float x);
void displayRoots(float a, float b, float c);

float absoluteValue(float x)
{
   if (x < 0)
   {
      x = -x;
   }
   return x;
}

// Function to compute the square root of a numbers

float squareRoot(float x)
{
   const float epsilon = .00001;
   float       guess   = 1.0;

   while (absoluteValue(guess * guess - x) >= epsilon)
   {
      guess = (x / guess + guess) / 2.0;
   }

   return guess;
}

void displayRoots(float a, float b, float c)
{
   float discriminant = b * b - 4 * a * c;

   if (discriminant < 0)
   {
      printf("The roots are imaginary.");
      return;
   }

   float root1 = (b - squareRoot(discriminant)) / (2 * a);
   float root2 = (b + squareRoot(discriminant)) / (2 * a);

   printf("First root is %g, and the second root is %g.\n", root1, root2);
}

int main(void)
{
   float a, b, c;

   printf("Enter a, b and c: ");
   scanf("%f%f%f", &a, &b, &c);

   displayRoots(a, b, c);

   return 0;
}
