#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;
};

node *TOP = NULL;

void push(int number)
{
  node *newNode = new node();
  newNode->data = number;
  if (TOP == NULL)
  {
    newNode->next = NULL;
    TOP = newNode;
  }
  else
  {
    newNode->next = TOP;
    TOP = newNode;
  }
}

void addValuesInTheStack()
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

int pop()
{
  int number = TOP->data;

  node *prevTOP = TOP;
  TOP = TOP->next;
  free(prevTOP);
  return number;
}

void display()
{
  node *list = TOP;
  cout << endl
       << "Displaying Stack !!" << endl;
  while (list != NULL)
  {
    cout << list->data << endl;
    list = list->next;
  }
  cout << endl;
}

void peek()
{
  if (TOP == NULL)
  {
    cout << "Stack is empty !!" << endl;
    return;
  }
  cout << TOP->data << endl;
}

void menu()
{

  do
  {
    cout << "Enter 1 to add values in the stack !!" << endl;
    cout << "Enter 2 to push value from the stack !!" << endl;
    cout << "Enter 3 to peek value from the stack !!" << endl;
    cout << "Enter 4 to pop values in the stack !!" << endl;
    cout << "Enter 5 to display the stack !!" << endl;
    cout << "Enter 6 to exit the menu !!" << endl;
    int number;
    int choice = 0;
    int value;
    cin >> choice;
    switch (choice)
    {
    case 1:

      cout << "Enter values in the stack (enter -1 to exit the entering the value): ";
      addValuesInTheStack();
      break;
    case 2:
      cout << "Enter value to push in the stack : ";
      cin >> number;
      push(number);
      break;
    case 3:
      peek();
      break;
    case 4:
      value = pop();

      if (value == -1)
      {
        cout << "" << endl;
      }
      cout << "Popped value : " << value << endl;
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
