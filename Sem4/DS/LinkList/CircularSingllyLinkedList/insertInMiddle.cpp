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

void insertInMiddle(int index, int number)
{
  node *ptr = start;
  int count = 0;
  do
  {
    if (index == count)
    {
      node *newNode = new node();
      newNode->data = number;
      newNode->next = ptr->next;
      ptr->next = newNode;
      break;
    }

    ptr = ptr->next;
    count++;
  } while (ptr != start);

  cout << endl;
}

int main()
{
  createList();
  display();
  int index, number;
  cout << "Enter index from you want to add node  : ";
  cin >> index;
  cout << "Enter data you enter : ";
  cin >> number;
  insertInMiddle(index, number);
  display();
  return 0;
}