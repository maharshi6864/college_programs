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
  cout << "Enter number or enter -1 to exit entering number : ";
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

void deleteDuplicate()
{
  node *current = start;

  while (current != NULL && current->next != NULL)
  {
    node *prev = current;
    node *checker = current->next;

    while (checker != NULL)
    {
      if (checker->data == current->data)
      {
        prev->next = checker->next;
        delete checker;
        checker = prev->next;
      }
      else
      {
        prev = checker;
        checker = checker->next;
      }
    }
    current = current->next;
  }
}

void sortLinkedList()
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

void display()
{
  node *ptr = start;

  while (ptr != NULL)
  {
    cout << ptr->data << endl;
    ptr = ptr->next;
  }
}

int main()
{
  createLinkedList();
  cout << "Displaying linked list !!" << endl;
  display();
  sortLinkedList();
  deleteDuplicate();
  cout << "Displaying linked list !!" << endl;
  display();

  return 0;
}