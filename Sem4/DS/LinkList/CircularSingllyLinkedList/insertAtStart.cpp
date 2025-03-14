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

void insertAtStart(int number)
{
  node *newNode = new node();
  newNode->data = number;
  newNode->next = start;
  start = newNode;
  rear->next = start;
}

int main()
{
  createList();
  display();
  int number;
  cout << "Enter data to insert at start : ";
  cin >> number;
  insertAtStart(number);
  cout << "Displaying the Circular LinkedList after insertation at start " << endl;
  display();
}
