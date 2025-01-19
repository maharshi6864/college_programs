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
  cout << "Enter data  or enter -1 : ";
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
  rear->next = start;
}

void display()
{
  node *ptr = start;
  do
  {
    cout << ptr->data << endl;
    ptr = ptr->next;
  } while (ptr != start);
}

void sumOfAllElements()
{
  int sum = 0;
  node *ptr = start;
  do
  {
    ptr = ptr->next;
    sum += ptr->data;
  } while (ptr != start);

  cout << "Sum of all elements is : " << sum << endl;
}
int main()
{
  createLinkedList();
  display();
  sumOfAllElements();
  return 0;
}