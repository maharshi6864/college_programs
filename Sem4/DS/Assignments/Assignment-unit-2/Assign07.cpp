#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;
  node *prev;
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

    if (start == NULL)
    {
      start = newNode;
      rear = newNode;
    }
    else
    {
      rear->next = newNode;
      newNode->prev = rear;
      rear = newNode;
    }
    cin >> number;
  }
}

void display()
{
  node *ptr = start;
  while (ptr != NULL)
  {
    cout << ptr->data << endl;
    ptr = ptr->next;
  }
}

void countNumberOfElements()
{
  node *ptr = start;
  int count = 0;
  while (ptr != NULL)
  {
    ptr = ptr->next;
    count++;
  }

  cout << "Number of elements in linkedlist is : " << count << endl;
}
int main()
{
  createLinkedList();
  display();
  countNumberOfElements();
  return 0;
}