#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;
};

node *LAST;
node *START;

void push(int number)
{
  node *newNode = new node();
  newNode->data = number;
  if (LAST == NULL)
  {
    newNode->next = NULL;
    LAST = newNode;
    START = newNode;
  }
  else
  {
    LAST->next = newNode;
    LAST = newNode;
  }
}

void display()
{
  node *ptr = START;
  cout << endl
       << "Displaying the queue !" << endl;
  while (ptr != NULL)
  {
    cout << ptr->data << endl;
    ptr = ptr->next;
  }
  cout << endl;
}

int poll()
{
  int number = START->data;
  node *ptr = START;

  START = START->next;
  free(ptr);
  return number;
}

void addValuesInTheQueue()
{
  while (true)
  {
    int number;
    cin >> number;
    if (number != -1)
    {
      push(number);
    }
    else
    {
      return;
    }
  }
}

void peek()
{
  if (START == NULL)
  {
    cout << "Queue is empty !!" << endl;
    return;
  }

  cout << endl
       << "Peek element is : " << START->data << endl;
}

void menu()
{

  do
  {
    cout << "Enter 1 to add values in the queue !!" << endl;
    cout << "Enter 2 to push value from the queue !!" << endl;
    cout << "Enter 3 to peek value from the queue !!" << endl;
    cout << "Enter 4 to poll values in the queue !!" << endl;
    cout << "Enter 5 to display the queue !!" << endl;
    cout << "Enter 6 to exit the menu !!" << endl;
    int number;
    int choice = 0;
    int value;
    cin >> choice;
    switch (choice)
    {
    case 1:

      cout << "Enter values in the queue (enter -1 to exit the entering the value): ";
      addValuesInTheQueue();
      break;
    case 2:
      cout << "Enter value to push in the queue : ";
      cin >> number;
      push(number);
      break;
    case 3:
      peek();
      break;
    case 4:
      value = poll();

      if (value == -1)
      {
        cout << "" << endl;
      }
      cout << "Polled value : " << value << endl;
      break;
    case 5:
      display();
      break;
    case 6:
      return;
      break;
    default:
      cout << "Not a valid choice !!" << endl;
      break;
    }

  } while (true);
}

int main()
{
  menu();
  return 0;
}