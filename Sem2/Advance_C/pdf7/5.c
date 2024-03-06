//  Write a C Program to create a linear link list consisting of elements 4 nodes. Take input from the
// user. Remove an element from the start of the created link list and display the link list after
// deletion operation.

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void printLinkList(struct node *p)
{
  while (p != NULL)
  {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

void deletingFirstElement(struct node **p)
{
  struct node *temp = *p;

  *p = (*p)->next;
  printf("Data at index 1st %d had been deleted !\n", temp->data);
  free(temp);
}

int main()
{
  struct node *one;
  struct node *two;
  struct node *three;
  struct node *four;
  struct node *five;

  one = (struct node *)malloc(sizeof(struct node));
  two = (struct node *)malloc(sizeof(struct node));
  three = (struct node *)malloc(sizeof(struct node));
  four = (struct node *)malloc(sizeof(struct node));
  five = (struct node *)malloc(sizeof(struct node));

  one->data = 90;
  two->data = 67;
  three->data = 56;
  four->data = 58;
  five->data = 34;

  one->next = two;
  two->next = three;
  three->next = four;
  four->next = five;
  five->next = NULL;

  printLinkList(one);
  deletingFirstElement(&one);
  printLinkList(one);
}