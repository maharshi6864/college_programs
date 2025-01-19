#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;
};

node *start = NULL;
node *rear = NULL;

void createLinkedList()
{
  int number;
  cout << "Enter data  or enter -1 : ";
  cin >> number;

  while (number != -1)
  {
    node *newNode = new node();
    newNode->data = number;
    newNode->next = NULL;
    if (start == NULL)
    {
      start = newNode;
      rear = newNode;
    }
    else
    {
      rear->next = newNode;
      rear = newNode;
    }
    cin >> number;
  }
  // rear->next = start;
}

void checkingForCircularLinkedList()
{
  node *ptr = start;
  while (ptr != NULL)
  {
    if (ptr->next == start)
    {
      cout << "This is a circular linked list !!" << endl;
      return;
    }
    ptr = ptr->next;
  }
  cout << "This is not a circular linked list !!" << endl;
}
int main()
{
  createLinkedList();
  checkingForCircularLinkedList();
  return 0;
}