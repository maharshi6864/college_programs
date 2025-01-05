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

node *deleteFromMid(node *ptr, int index)
{
  node *start = ptr;
  int count = 0;
  while (ptr != NULL)
  {
    if (index == count)
    {
      node *preNode = ptr->prev;
      node *postNode = ptr->next;
      preNode->next = postNode;
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
  int index;
  cout << "Enter index to delete its node !";
  cin >> index;
  dll = deleteFromMid(dll, index);
  cout << "End node deleted." << endl;
  display(dll);
  return 0;
}