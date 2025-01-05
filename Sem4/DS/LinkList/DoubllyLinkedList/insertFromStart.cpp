#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *prev;
  node *next;
};

node *create_node()
{
  node *start = NULL;
  node *dummy = NULL;
  int number;
  cout << "Enter data for doublly linked list : \n";
  cout << "Enter -1 to end entering data.\n";
  cin >> number;

  while (number != -1)
  {
    node *new_node = new node();
    if (start == NULL)
    {
      new_node->data = number;
      new_node->prev = NULL;
      new_node->next = NULL;
      start = new_node;
      dummy = new_node;
    }
    else
    {
      new_node->data = number;
      new_node->prev = dummy;
      dummy->next = new_node;
      dummy = new_node;
    }
    cin >> number;
  }

  return start;
}

node *insertFromStart(node *ptr, int data)
{
  node *start = ptr;
  node *new_node = new node();
  new_node->data = data;
  new_node->next = start;
  start->prev = new_node;
  return new_node;
}

void display(node *ptr)
{
  int count = 0;
  while (ptr != NULL)
  {
    cout << "node " << count << " :: " << ptr->data << " " << endl;
    ptr = ptr->next;
    count++;
  }
}

int main()
{
  node *dll = create_node();
  display(dll);
  int number;
  cout << "Enter data for new node from start : ";
  cin >> number;
  dll = insertFromStart(dll, number);
  display(dll);
  return 0;
}