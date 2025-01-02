#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;
};

node *createList()
{
  node *start = NULL;
  node *rear = NULL;
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
  return start;
}

node *deleteNodeFromStart(node *ptr)
{
  return ptr->next;
}

void viewLinkedList(node *ptr)
{
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
  node *start = createList();
  viewLinkedList(start);
  start = deleteNodeFromStart(start);
  viewLinkedList(start);
  return 0;
}