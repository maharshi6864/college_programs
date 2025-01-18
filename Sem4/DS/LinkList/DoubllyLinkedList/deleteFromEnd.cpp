#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *prev;
  node *next;
};

node *start = NULL;
node *rear = NULL;

void create_node()
{
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
      rear = new_node;
    }
    else
    {
      new_node->data = number;
      new_node->prev = rear;
      rear->next = new_node;
      rear = new_node;
    }
    cin >> number;
  }
}

void deleteFromEnd()
{
  node *ptr = start;
  while (ptr != NULL)
  {
    if (ptr->next == NULL)
    {
      node *preNode = ptr->prev;
      preNode->next = NULL;
      free(ptr);
      break;
    }
    ptr = ptr->next;
  }
}

void display()
{
  node *ptr = start;
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
  create_node();
  display();
  deleteFromEnd();
  cout << "End node deleted." << endl;
  display();
  return 0;
}