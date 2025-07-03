#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node* next;
};

struct Node* createNode(int value)
{
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->next = NULL;
  return newNode;
}

void printList(struct Node* head)
{
  struct Node* temp = head;
  while(temp != NULL)
  {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}
int main()
{
  struct Node* first = createNode(10);
  struct Node* second = createNode(20);

  first->next = second;

  printList(first);
}
