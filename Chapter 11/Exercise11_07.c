// Program to sort an array of integers into ascending order

#include <stdio.h>

void sort(int *a, int n)
{
	int temp;
	int * end = a + n;
	int *j;

	for (;a < end - 1; ++a)
		for (j = a + 1; j < end; ++j)
			if (*a > *j)
			{
				temp = *a;
				*a = *j;
				*j = temp;
			}
}

int main(void)
{
	int i;
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};

	void sort(int a[], int n);

	printf("The array before the sort:\n");

	for (i = 0; i < 16; ++i)
		printf("%i ", array[i]);

	sort(array, 16);

	printf("\n\nThe array after the sort:\n");

	for (i = 0; i < 16; ++i)
		printf("%i ", array[i]);

	printf("\n");

	return 0;
}
