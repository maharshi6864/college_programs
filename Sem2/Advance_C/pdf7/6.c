// Write a C program to create a linear link list consisting of 10 nodes. Display all nodes at odd
//  position from the created link list.
// Sample Output:
// Link list: 35 40 80 60 70 30 52 41 80 25
// Nodes at odd position are: 35 80 70 52 80

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void printElementAtOdd(struct node *p)
{
  int i = 0;
  while (p != NULL)
  {
    if (i % 2 != 0)
    {
      printf("%d ", p->data);
    }
    p = p->next;
    i++;
  }
  printf("\n");
}

void printLinkList(struct node *p)
{
  printf("Elements in the link list !! \n");
  while (p != NULL)
  {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

int main()
{
  struct node *one;
  struct node *two;
  struct node *three;
  struct node *four;
  struct node *five;
  struct node *six;
  struct node *seven;
  struct node *eight;
  struct node *nine;
  struct node *ten;

  one = (struct node *)malloc(sizeof(struct node));
  two = (struct node *)malloc(sizeof(struct node));
  three = (struct node *)malloc(sizeof(struct node));
  four = (struct node *)malloc(sizeof(struct node));
  five = (struct node *)malloc(sizeof(struct node));
  six = (struct node *)malloc(sizeof(struct node));
  seven = (struct node *)malloc(sizeof(struct node));
  eight = (struct node *)malloc(sizeof(struct node));
  nine = (struct node *)malloc(sizeof(struct node));
  ten = (struct node *)malloc(sizeof(struct node));

  one->data = 90;
  two->data = 67;
  three->data = 56;
  four->data = 58;
  five->data = 34;
  six->data = 90;
  seven->data = 67;
  eight->data = 56;
  nine->data = 58;
  ten->data = 34;

  one->next = two;
  two->next = three;
  three->next = four;
  four->next = five;
  five->next = six;
  six->next = seven;
  seven->next = eight;
  eight->next = nine;
  nine->next = ten;
  ten->next = NULL;

  printLinkList(one);
  printElementAtOdd(one);
}