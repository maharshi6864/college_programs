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

void createList()
{
  node *newNode;
  int number;
  cout << "Enter -1 to end entering data !!" << endl;
  cout << "Enter data  : " << endl;
  cin >> number;
  while (number != -1)
  {
    newNode = new node();
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
}

void insertNodeFromStart(int value)
{
  node *newNode = new node();
  newNode->next = start;
  newNode->data = value;
  start = newNode;
}

void viewLinkedList()
{
  node *ptr = start;
  if (ptr == NULL)
  {
    cout << "Node is empty!!";
  }
  int index = 0;
  while (ptr != NULL)
  {
    cout << "node " << index++ << "::" << ptr->data << "\n";
    ptr = ptr->next;
  }

  cout << endl;
}

int main()
{
  createList();
  viewLinkedList();
  cout << "Enter value for inserting starting node : ";
  int value;
  cin >> value;
  insertNodeFromStart(value);
  viewLinkedList();
  return 0;
}