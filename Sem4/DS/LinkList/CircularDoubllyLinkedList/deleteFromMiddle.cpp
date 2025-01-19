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

void deleteFromMiddle(int index)
{
  node *ptr = start;
  int count = 0;
  do
  {
    if (index == count)
    {
      ptr->prev->next = ptr->next;
      ptr->next->prev = ptr->prev;
      free(ptr);
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
  int index;
  cout << "Enter index you want to delete : ";
  cin >> index;
  deleteFromMiddle(index);
  display();
  return 0;
}