#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;
};

node *createList()
{
  node *start = NULL;
  node *rear = NULL;
  node *newNode;
  int number;
  cout << "Enter -1 to end entering data !!" << endl;
  cout << "Enter data  : " << endl;
  cin >> number;
  while (number != -1)
  {

    newNode = new node();
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
  return start;
}

void display(node *ptr)
{

  int index = 0;
  node *start = ptr;

  do
  {
    cout << "node " << index++ << "::" << ptr->data << "\n";
    ptr = ptr->next;
  } while (ptr != start);

  cout << endl;
}

void insertInMiddle(node *ptr, int index, int number)
{

  int count = 0;
  node *start = ptr;

  do
  {
    if (index == count)
    {
      node *newNode = new node();
      newNode->data = number;
      newNode->next = ptr->next;
      ptr->next = newNode;
    }

    ptr = ptr->next;
    count++;
  } while (ptr != start);

  cout << endl;
}

int main()
{
  node *start = createList();
  display(start);
  int index, number;
  cout << "Enter index from you want to add node  : ";
  cin >> index;
  cout << "Enter data you enter : ";
  cin >> number;
  insertInMiddle(start, index, number);
  display(start);
  return 0;
}