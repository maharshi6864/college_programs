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

void insertFromMid(int index, int number)
{
  node *ptr = start;
  int count = 0;
  while (ptr != NULL)
  {
    if (index == count)
    {
      node *new_node = new node();
      new_node->data = number;
      ptr->next->prev = new_node;
      new_node->next = ptr->next;
      ptr->next = new_node;
      new_node->prev = ptr;
      break;
    }
    ptr = ptr->next;
    count++;
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
  int number;
  int index;
  cout << "Enter index to enter node after it : ";
  cin >> index;
  cout << "Enter data for new node from middle : ";
  cin >> number;
  insertFromMid(index, number);
  display();
  return 0;
}