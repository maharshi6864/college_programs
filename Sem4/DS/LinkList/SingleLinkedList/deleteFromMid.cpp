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

void deleteNodeFromMid(int index)
{
  node *ptr = start;
  node *preNode;
  int count = 0;
  while (ptr != NULL)
  {
    if (count == index)
    {
      preNode->next = ptr->next;
      free(ptr);
      break;
    }
    preNode = ptr;
    ptr = ptr->next;
    count++;
  }
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
  cout << "Enter index to delete the node : ";
  int index;
  cin >> index;
  deleteNodeFromMid(index);
  viewLinkedList();
  return 0;
}