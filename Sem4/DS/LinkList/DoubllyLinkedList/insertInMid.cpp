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

node *insertFromMid(node *ptr, int index, int data)
{
  node *start = ptr;
  int count = 0;
  while (ptr != NULL)
  {
    if (index == count)
    {
      node *post_node = ptr->next;
      node *new_node = new node();
      new_node->data = data;
      new_node->prev = ptr;
      new_node->next = post_node;
      ptr->next = new_node;
      break;
    }
    ptr = ptr->next;
    count++;
  }

  return start;
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
  int index;
  cout << "Enter index to enter node after it : ";
  cin >> index;
  cout << "Enter data for new node from middle : ";
  cin >> number;
  dll = insertFromMid(dll, index, number);
  display(dll);
  return 0;
}