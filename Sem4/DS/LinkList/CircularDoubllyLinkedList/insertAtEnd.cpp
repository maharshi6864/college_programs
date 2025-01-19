#include <iostream>

using namespace std;

class node
{
public:
  node *prev;
  int data;
  node *next;
};

node *start = NULL;
node *rear = NULL;
int count = 0;

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
    count++;
    if (start == NULL)
    {
      start = newNode;
      rear = newNode;
      start->next = rear;
    }
    else
    {
      newNode->prev = rear;
      rear->next = newNode;
      newNode->next = start;
      rear = newNode;
    }
    cin >> number;
  }
  start->prev = rear;
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
  node *newNode = new node();
  newNode->data = number;
  newNode->prev = rear;
  newNode->next = start;
  rear->next = newNode;
  rear = newNode;
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
