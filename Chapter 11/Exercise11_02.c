#include <stdio.h>

struct entry
{
   int            value;
   struct entry * next;
};

void insertEntry(struct entry * newEntry, struct entry * insertAfter)
{
   newEntry->next    = insertAfter->next;
   insertAfter->next = newEntry;
}

// This function is not a part of this question but I wanted to write it so
// that I can verify the actual function works correctly.
void displayList(struct entry * listStart)
{
	while (listStart->next)
	{
		printf("%i - ", listStart->value);
		listStart = listStart->next;
	}

	printf("%i\n", listStart->value);
}

int main(void)
{
   struct entry  n1, n2, n3;
   struct entry *listStart = &n1;
	struct entry newOne;

   n1.value = 100;
   n1.next  = &n2;

   n2.value = 200;
   n2.next  = &n3;

   n3.value = 300;
   n3.next  = 0;

	displayList(listStart);

	newOne.value = 150;
	insertEntry(&newOne, &n1);

	displayList(listStart);

   return 0;
}
