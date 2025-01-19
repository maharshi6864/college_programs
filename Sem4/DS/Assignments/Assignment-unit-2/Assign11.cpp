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

void createLinkedList()
{
  int number;
  cout << "Enter data or enter -1 to exit entering data : ";
  cin >> number;

  while (number != -1)
  {
    node *newNode = new node();
    newNode->data = number;

    if (start == NULL)
    {
      start = newNode;
      rear = newNode;
    }
    else
    {
      rear->next = newNode;
      rear = newNode;
    }
    cin >> number;
  }
}

void display()
{
  node *ptr = start;
  while (ptr != NULL)
  {
    cout << ptr->data << endl;
    ptr = ptr->next;
  }
}

void sortList()
{
  bool swapped = false;
  node *ptr;
  node *lptr = NULL;

  do
  {
    ptr = start;
    swapped = false;
    while (ptr->next != lptr)
    {
      if (ptr->data > ptr->next->data)
      {
        int temp = ptr->data;
        ptr->data = ptr->next->data;
        ptr->next->data = temp;
        swapped = true;
      }
      ptr = ptr->next;
    }
    lptr = ptr;
  } while (swapped);
}
int main()
{
  createLinkedList();
  cout << "displaying linked list \n"
       << endl;
  display();
  sortList();
  cout << "displaying linked list \n"
       << endl;
  display();
  return 0;
}