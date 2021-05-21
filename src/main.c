#include "list.h"

int main()
{
  struct Node *head = newList(9);
  append(head, 5);
  append(head, 6);
  append(head, 7);
  append(head, 8);
  printList(head);
  reverseList(&head);
  printList(head);



  return 0;
}