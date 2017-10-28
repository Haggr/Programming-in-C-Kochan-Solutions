#include <stdio.h>

struct Entry
{
   int            value;
   struct Entry * prev;
   struct Entry * next;
};

void displayList(struct Entry * listStart);
void insertEntry(struct Entry * newEntry, struct Entry * insertAfter);
void removeEntry(struct Entry * removeAfter);

void displayList(struct Entry * listStart)
{
   while (listStart->next)
   {
      printf("%i - ", listStart->value);
      listStart = listStart->next;
   }

   printf("%i\n", listStart->value);
}

void insertEntry(struct Entry * newEntry, struct Entry * insertAfter)
{
   newEntry->next    = insertAfter->next;
   insertAfter->next = newEntry;
   newEntry->prev    = insertAfter;
}

void removeEntry(struct Entry * removeAfter)
{
   removeAfter->next       = removeAfter->next->next;
   removeAfter->next->prev = removeAfter;
}

int main(void)
{
   struct Entry head, n1, n2, n3;

   head = (struct Entry) {.next = &n1, .prev = 0 };
   n1   = (struct Entry) {.value = 100, .next = &n2, .prev = &head };
   n2   = (struct Entry) {200, &n1, &n3 };
   n3   = (struct Entry) {300, &n2, 0 };

   displayList(head.next);

   struct Entry newEntry = { .value = 400 };

   insertEntry(&newEntry, &n2);

   displayList(head.next);

   removeEntry(&n1);

   displayList(head.next);

   return 0;
}
