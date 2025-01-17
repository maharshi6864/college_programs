#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;
};

node *createLinkedList()
{
  int number;
  cout << "Enter -1 to end entering data !!" << endl;
  cout << "Enter data  : " << endl;
  cin >> number;
  node *start = NULL;
  node *rear = NULL;
  while (number != -1)
  {
    node *newNode = new node();
    newNode->data = number;
    if (start == NULL)
    {
      start = newNode;
      rear = newNode;
      start->next = rear;
    }
    else
    {
      newNode->next = start;
      rear->next = newNode;
      rear = newNode;
    }
    cin >> number;
  }
  return start;
}

void displayLinkedList(node *ptr)
{
  node *start = ptr;
  int count = 0;
  do
  {
    cout << "node " << count << ":: " << ptr->data << endl;
    ptr = ptr->next;
    count++;
  } while (ptr != start);
}

node *insertAtStart(node *ptr, int number)
{
  node *start = ptr;
  node *newNode = new node();
  newNode->data = number;
  do
  {
    if (ptr->next == start)
    {
      ptr->next = newNode;
      newNode->next = start;
      break;
    }
    ptr = ptr->next;
  } while (ptr != start);

  return newNode;
}

int main()
{
  node *start = createLinkedList();
  displayLinkedList(start);
  int number;
  cout << "Enter data to insert at start : ";
  cin >> number;
  start = insertAtStart(start, number);
  cout << "Displaying the Circular LinkedList after insertation at start " << endl;
  displayLinkedList(start);
}
