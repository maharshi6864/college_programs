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

void create_node()
{
  int number;
  cout << "Enter data for circullar singlly linked list : \n";
  cout << "Enter -1 to end entering data.\n";
  cin >> number;

  while (number != -1)
  {
    node *newNode = new node();
    newNode->data = number;

    if (start == NULL)
    {
      newNode->next = newNode;
      start = newNode;
      rear = newNode;
    }
    else
    {
      rear->next = newNode;
      newNode->next = start;
      rear = newNode;
    }
    cin >> number;
  }
}

void deleteFromEnd()
{
  node *ptr = start;
  node *prevPtr;
  do
  {
    if (ptr == rear)
    {
      prevPtr->next = start;
      free(ptr);
      break;
    }
    prevPtr = ptr;
    ptr = ptr->next;
  } while (ptr != start);
}

void display()
{
  node *ptr = start;
  int count = 0;
  do
  {
    cout << "node " << count << " :: " << ptr->data << endl;
    ptr = ptr->next;
    count++;
  } while (ptr != start);
  cout << endl;
}

int main()
{
  create_node();
  display();
  deleteFromEnd();
  cout << "End node deleted." << endl;
  display();
  return 0;
}