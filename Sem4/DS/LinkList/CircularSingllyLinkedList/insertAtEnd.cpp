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
      start = newNode;
      rear = newNode;
      start->next = rear;
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

void display()
{
  node *ptr = start;
  int index = 0;
  node *start = ptr;

  do
  {
    cout << "node " << index++ << "::" << ptr->data << "\n";
    ptr = ptr->next;
  } while (ptr != start);

  cout << endl;
}

void insertAtEnd(int number)
{
  node *ptr = start;
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
}

int main()
{
  createList();
  display();
  int number;
  cout << "Enter data to insert at end : ";
  cin >> number;
  insertAtEnd(number);
  cout << "Displaying the Circular LinkedList after insertation at end " << endl;
  display();
}
