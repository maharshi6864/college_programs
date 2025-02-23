#include <iostream>

using namespace std;
// Stack as an array

int stack[100];
int sizee = 100, top = -1;

void push(int number)
{
  if ((sizee - 1) <= top)
  {
    cout << "Stack overflow !!" << endl;
    return;
  }

  stack[++top] = number;
}

void peek()
{
  if (top == -1)
  {
    cout << "Stack is empty !!" << endl;
    return;
  }
  cout << stack[top] << endl;
}

void display()
{
  cout << endl;
  cout << "Displaying the elements in the stack !!" << endl;
  for (int i = top; i >= 0; i--)
  {
    cout << stack[i] << endl;
  }
  cout << endl;
}

int pop()
{
  if (top != -1)
  {
    int number = stack[top];
    stack[top] = 0;
    top--;
    return number;
  }

  cout << "Stack underflow !!" << endl;
  return -1;
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
