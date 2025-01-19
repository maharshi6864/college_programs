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

void searchForElement(int search)
{
  node *ptr = start;
  int index = -1;
  int count = 0;
  while (ptr != NULL)
  {
    if (ptr->data == search)
    {
      index = count;
      break;
    }
    count++;
    ptr = ptr->next;
  }

  if (index != -1)
  {
    cout << "Element is present on index " << index << endl;
  }
  else
  {
    cout << "Element not found." << endl;
  }
}

int main()
{
  createLinkedList();
  cout << "displaying linked list \n"
       << endl;
  display();
  int searchElement;
  cout << "Enter element you want to search : ";
  cin >> searchElement;
  searchForElement(searchElement);
  return 0;
}