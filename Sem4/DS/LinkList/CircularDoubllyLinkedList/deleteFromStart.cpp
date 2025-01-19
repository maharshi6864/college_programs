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

void deleteFromStart()
{
  node *ptr = start;
  start = start->next;
  rear->next = start;
  start->prev = rear;
  free(ptr);
}

int main()
{
  createList();
  display();
  deleteFromStart();
  cout << "Start node deleted." << endl;
  display();
  return 0;
}