#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
};

void push(struct Node **head, int newData)
{
  struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
  newNode->data = newData;
  newNode->prev = NULL;
  newNode->next = *head;

  if (*head != NULL)
  {
    (*head)->prev = newNode;
  }
  *head = newNode;
}

void append(struct Node** head, int newData)
{
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

  newNode->data = newData;
  newNode->next = NULL;

  if (*head == NULL)
  {
    newNode->prev = NULL;
    *head = newNode;
    return;
  }

  struct Node *last = *head;

  while (last->next != NULL)
  {
    last = last->next;
  }
  last->next = newNode;
  newNode->prev = last;
}

void printList(struct Node *node)
{
  if (node == NULL)
  {
    printf("List bo'sh");
    return;
  }

  printf("Oldinga: ");
  while(node != NULL)
  {
    printf("%d -> ", node->data);
    node = node->next;
  }
}


void printListBackward(struct Node *head)
{
  if (head == NULL)
  {
    printf("List bo'sh\n");
    return;
  }

  struct Node *last = head;

  while (last->next != NULL)
  {
    last = last->next;
  }

  printf("Orqaga: ");
  while (last != NULL)
  {
    printf("%d -> ", last->data);
    last = last->prev;
  }
  printf("NULL\n");
}


int main()
{
  struct Node *head = NULL;
  push(&head, 2);
  push(&head, 4);
  push(&head, 6);

  append(&head, 7);
  printList(head);
  printListBackward(head);

}
