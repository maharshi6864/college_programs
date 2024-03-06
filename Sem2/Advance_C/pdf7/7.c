// Write a C program to create a linear link list consisting of 5 nodes. Display all the nodes of the
// link list on the terminal. Take input from the user for the node to be searched from the created
// link list and if the node exist display the position of the searched node on the terminal.

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void searchTheElement(struct node *p, int searchElement)
{
  int i = 0;
  int flag = 0;
  while (p != NULL)
  {
    if (p->data == searchElement)
    {
      printf("Position of the element %d found at : %d\n", searchElement, i);
      flag = 1;
    }
    p = p->next;
    i++;
  }
  if (!flag)
  {
    printf("Searched Element not found!!");
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

  int searchEl = 0;
  printf("Enter Element you want to search in linklist : ");
  scanf("%d", &searchEl);
  // printLinkList(one);
  searchTheElement(one, searchEl);
}