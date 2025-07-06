#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void insertAtBeginning(struct Node **head, int newData)
{
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

  newNode->data = newData;
  newNode->next = *head;
  *head = newNode;
}

void printNodes(struct Node* head)
{
  while(head != NULL)
  {
    printf("%d ->", head->data);
    head = head->next;
  }
  printf("NULL\n");
}

void insertAtEnd(struct Node **head, int newData)
{
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = newData;
  newNode->next = NULL;

  if (*head == NULL)
  {
    *head = newNode;
    return;
  }

  struct Node* temp = *head;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

int main()
{
  struct Node *head = NULL;

  insertAtEnd(&head, 11);
  insertAtEnd(&head, 12);
  insertAtEnd(&head, 13);
  insertAtEnd(&head, 14);
  insertAtEnd(&head, 15);

  printNodes(head);

}
