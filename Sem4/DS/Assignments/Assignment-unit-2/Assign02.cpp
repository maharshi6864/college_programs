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
  int choice;
  bool ex = true;
  while (ex)
  {
    cout << "Enter your choice \n1.To display linked list.\n2.To delete the node from the middle.\n3.Enter -1 to exit the menu.\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
      viewLinkedList();
      break;
    case 2:
      int index;
      cout << "Enter index number delete : ";
      cin >> index;
      deleteNodeFromMid(index);
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