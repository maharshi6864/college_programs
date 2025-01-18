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

void insertNodeFromMid(int index, int value)
{
  node *ptr = start;
  node *newNode = new node();
  newNode->data = value;
  int count = 0;
  while (ptr != NULL)
  {
    if (count == index)
    {
      node *postNode = ptr->next;
      ptr->next = newNode;
      newNode->next = postNode;
      break;
    }
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
  int value;
  int index;
  cout << "Enter index for inserting starting node : ";
  cin >> index;
  cout << "Enter value for inserting starting node : ";
  cin >> value;
  insertNodeFromMid(index, value);
  viewLinkedList();
  return 0;
}