// Dictionary lookup program

#include <stdio.h>

struct entry
{
	char word[15];
	char definition[50];
};

// Function to compare two character strings

int compareString(const char * s1, const char * s2)
{
	int answer;

	while (*s1++ == *s2++ && *s1 != '\0');

	if (*s1 < *s2)
		answer = -1;
	else if (*s1 == *s2)
		answer = 0;
	else
		answer = 1;

	return answer;
}

int main(void)
{
	char str1[] = "some random text here";
	char str2[] = "and here some other stuff";
	char str3[] = "some random text here";

	printf("compareString(str1, str2) = %i\n", compareString(str1, str2));
	printf("compareString(str2, str3) = %i\n", compareString(str2, str3));
	printf("compareString(str1, str3) = %i\n", compareString(str1, str3));

	return 0;
}
