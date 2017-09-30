#include <stdio.h>

void transposeMatrix(int rows, int columns,
                     int M[rows][columns], int N[columns][rows])
{
   for (int i = 0; i < rows; i++)
   {
      for (int j = 0; j < columns; ++j)
      {
         N[j][i] = M[i][j];
      }
   }
}

int main(void)
{
   int matrix[4][5] =
   {
      { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 }, { 4, 5, 6, 7, 8 }
   };

   int transposed[5][4];

   transposeMatrix(4, 5, matrix, transposed);

   for (int i = 0; i < 5; ++i)
   {
      for (int j = 0; j < 4; j++)
      {
         printf("%5i", transposed[i][j]);
      }
      printf("\n");
   }
}
