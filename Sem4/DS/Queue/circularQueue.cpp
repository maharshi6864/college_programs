#include <iostream>
#define MAX 5

using namespace std;

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int number)
{
  if ((front == 0 && rear == MAX - 1) || rear + 1 == front)
  {
    cout << "Queue Overflow !!" << endl;
    return;
  }
  if (front == -1 && rear == -1)
  {
    front = rear = 0;
    queue[rear] = number;
  }
  else if (rear == MAX - 1)
  {
    rear = 0;
    queue[rear] = number;
  }
  else
  {
    rear++;
    queue[rear] = number;
  }
}

void display()
{
  if (front == 0)
  {
    for (int i = 0; i < rear; i++)
    {
      cout << queue[i] << endl;
    }
  }
  else
  {
    if (front > rear)
    {
      for (int i = front; i < MAX; i++)
      {
        cout << queue[i] << endl;
      }
      for (int i = 0; i <= rear; i++)
      {
        cout << queue[i] << endl;
      }
    }
  }
}

int dequeue()
{
  if (front == -1)
  {
    cout << "Queue is underflow !!";
    return -1;
  }
  else
  {
    int number = queue[front];
    if (front == rear)
    {
      rear = -1;
      front = -1;
    }
    else if (front == MAX - 1)
    {
      front = 0;
    }
    else
    {
      front++;
    }
    return number;
  }
}

void addValuesInTheQueue()
{
  while (true)
  {
    int number;
    cin >> number;
    if (number != -1)
    {
      enqueue(number);
    }
    else
    {
      return;
    }
  }
}

void peek()
{
  if (front == -1)
  {
    cout << "Queue is empty !!" << endl;
    return;
  }

  cout << endl
       << "Peek element is : " << queue[front] << endl;
}


void menu()
{

  do
  {
    cout << "Enter 1 to add values in the queue !!" << endl;
    cout << "Enter 2 to push value from the queue !!" << endl;
    cout << "Enter 3 to peek value from the queue !!" << endl;
    cout << "Enter 4 to dequeue values in the queue !!" << endl;
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
      enqueue(number);
      break;
    case 3:
      peek();
      break;
    case 4:
      value = dequeue();

      if (value == -1)
      {
        cout << "" << endl;
      }
      cout << "Dequeued value : " << value << endl;
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