#include <stdio.h>
#include <stdlib.h>

// struct Node
// {
//   int data;
//   struct Node* next;
// };

// struct Node* createNode(int value)
// {
//   struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
//   newNode->data = value;
//   newNode->next = NULL;
//   return newNode;
// }

// void printList(struct Node* head)
// {
//   struct Node* temp = head;
//   while(temp != NULL)
//   {
//     printf("%d -> ", temp->data);
//     temp = temp->next;
//   }
//   printf("NULL\n");
// }
// int main()
// {
//   struct Node* first = createNode(10);
//   struct Node* second = createNode(20);

//   first->next = second;

//   printList(first);
// }

// struct Node
// {
//   int data;
//   struct Node* next;
// };

// struct Node* createNode(int value)
// {
//   struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

//   newNode->data = value;
//   newNode->next = NULL;
//   return newNode;
// }

// void printNode(struct Node *head)
// {
//   struct Node* temp = head;

//   while(temp != NULL)
//   {
//     printf("%d -> ", temp->data);
//     temp = temp->next;
//   }
//   printf("NULL\n");
// }


// void pushFront(struct Node** head, int value)
// {
//   struct Node* newNode = createNode(value);

//   newNode->next = *head;
//   *head = newNode;
// }

// void pushBack(struct Node** head, int value)
// {
//   struct Node* newNode = createNode(value);

//   if (*head == NULL)
//   {
//     *head = newNode;
//     return;
//   }

//   struct Node* temp = *head;

//   while(temp->next != NULL)
//   {
//     temp = temp->next;
//   }
//   temp->next = newNode;
// }

// int main()
// {
//   struct Node* head = NULL;
//   pushBack(&head, 51);
//   pushBack(&head, 52);
//   pushBack(&head, 53);
//   pushBack(&head, 54);

//   printNode(head);
// }
