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

void insertNodeFromEnd(int value)
{
  node *ptr = start;
  node *newNode = new node();
  newNode->data = value;
  while (ptr != NULL)
  {
    if (ptr->next == NULL)
    {
      ptr->next = newNode;
      break;
    }
    ptr = ptr->next;
  }
}

void insertNodeFromStart(int value)
{
  node *newNode = new node();
  newNode->next = start;
  newNode->data = value;
  start = newNode;
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
  int choice;
  bool ex = true;
  while (ex)
  {
    cout << "Enter your choice \n1.To display linked list.\n2.To insert the node from the middle.\n3.To insert the node from the end.\n4.To insert the node from the start.\n5.Enter -1 to exit the menu.\n";
    cin >> choice;
    int index, value;
    switch (choice)
    {
    case 1:
      viewLinkedList();
      break;
    case 2:

      cout << "Enter index number to enter data : ";
      cin >> index;
      cout << "Enter value to be inserted : ";
      cin >> value;

      insertNodeFromMid(index, value);
      viewLinkedList();
      break;
    case 3:
      cout << "Enter value to be inserted : ";
      cin >> value;
      insertNodeFromEnd(value);
      viewLinkedList();
      break;
    case 4:
      cout << "Enter value to be inserted : ";
      cin >> value;
      insertNodeFromStart(value);
      viewLinkedList();
      break;

    case -1:
      ex = false;
      break;

    default:
      cout << "Wrong Option Selected !!";
      break;
    }
  }
  return 0;
}