// Write a C Program to create a linear link list consisting of elements 5 nodes. Take input from the
// user. Add add a new node at the beginning of the created link list.
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

  printf("Enter data for node 1 : ");
  scanf("%d", &one->data);
  printf("Enter data for node 2 : ");
  scanf("%d", &two->data);
  printf("Enter data for node 3 : ");
  scanf("%d", &three->data);
  printf("Enter data for node 4 : ");
  scanf("%d", &four->data);
  printf("Enter data for node 5 : ");
  scanf("%d", &five->data);

  one->next = two;
  two->next = three;
  three->next = four;
  four->next = five;
  five->next = NULL;

  printLinkList(one);
}