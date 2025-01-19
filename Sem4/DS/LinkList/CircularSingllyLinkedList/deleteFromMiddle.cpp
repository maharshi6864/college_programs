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

void deleteFromMiddle(int index)
{
  node *ptr = start;
  int count = 0;
  node *start = ptr;
  node *previous = NULL;
  do
  {
    if (index == count)
    {
      previous->next = ptr->next;
    }
    previous = ptr;
    ptr = ptr->next;
    count++;
  } while (ptr != start);

  cout << endl;
}

int main()
{
  create_node();
  display();
  int index;
  cout << "Enter index you want to delete : ";
  cin >> index;
  deleteFromMiddle(index);
  display();
  return 0;
}