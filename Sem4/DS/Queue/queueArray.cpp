#include <iostream>

using namespace std;

int queue[100], sizee = 100, lastElementIndex = -1;

void push(int number)
{
  if ((lastElementIndex) >= sizee - 1)
  {
    cout << "Queue Overflow !!" << endl;
    return;
  }

  queue[++lastElementIndex] = number;
}

void display()
{
  if (lastElementIndex == -1)
  {
    cout << "Queue is empty !!" << endl;
    return;
  }

  cout << endl
       << "Displaying the queue " << endl;
  for (int i = 0; i <= lastElementIndex; i++)
  {
    cout << queue[i] << endl;
  }
  cout << endl;
}

int poll()
{
  if (lastElementIndex == -1)
  {
    cout << "Queue is empty !!" << endl;
    return -1;
  }
  int number = queue[0];

  for (int i = 0; i < lastElementIndex; i++)
  {
    if (i + 1 > sizee)
    {
      break;
    }
    queue[i] = queue[i + 1];
  }
  cout << endl;
  lastElementIndex--;
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
  if (lastElementIndex == -1)
  {
    cout << "Queue is empty !!" << endl;
    return;
  }

  cout << endl
       << "Peek element is : " << queue[lastElementIndex] << endl;
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