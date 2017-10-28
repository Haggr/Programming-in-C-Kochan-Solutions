/*
 *	It's a doubly linked list. I'm sure you knew it already. :p
 */

 #include <stdio.h>

struct Entry
{
   int            value;
   struct Entry * prev;
   struct Entry * next;
};

void displayList(struct Entry * listStart);

void displayList(struct Entry * listStart)
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
   struct Entry head, n1, n2, n3;

   head.next = &n1;
	head.prev  = 0;

   n1 = (struct Entry) {.value = 100, .next = &n2, .prev = &head };

   n2 = (struct Entry){200, &n1, &n3 };

   n3 = (struct Entry){300, &n2, 0 };

   displayList(head.next);

   return 0;
}
