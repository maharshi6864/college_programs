#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;
};

node *createRandomList()
{
  node *start = NULL;
  node *dupli = NULL;
  node *newNode = NULL;
  int numbers[] = {23, 45, 56, 67, 78, 89, 90, 12, 23, 46, 78, 98, 66, 44, 33, 44, 42, 34};
  int sizeOfList = sizeof(numbers) / sizeof(numbers[0]);
  int count = 0;
  while (sizeOfList > count)
  {
    newNode = new node();
    newNode->data = numbers[count];
    if (start == NULL)
    {
      start = newNode;
      dupli = newNode;
    }
    else
    {
      dupli->next = newNode;
      dupli = newNode;
    }

    count++;
  }

  return start;
}

node *createLinkList()
{
  node *start = NULL;
  node *dupli = NULL;
  node *newNode = NULL;
  int number;
  cout << "Enter \"-1\" to end taking the inputs !!" << endl;
  cin >> number;
  while (number != -1)
  {
    newNode = new node();
    newNode->data = number;
    if (start == NULL)
    {
      start = newNode;
      dupli = newNode;
    }
    else
    {
      dupli->next = newNode;
      dupli = newNode;
    }

    cin >> number;
  }

  return start;
}

void display(node *ptr)
{
  if (ptr == NULL)
  {
    cout << "Link List is Empty !!" << endl;
  }
  int index = 0;
  while (ptr != NULL)
  {
    cout << "node " << index++ << " : " << ptr->data << endl;
    ptr = ptr->next;
  }
}

void updateTheIndexValue(node *ptr, int index, int value)
{
  if (ptr == NULL)
  {
    cout << "Link List is Empty !!" << endl;
  }
  node *start = ptr;
  int count = 0;
  while (ptr != NULL)
  {
    if (count == index)
    {
      ptr->data = value;
      cout << "Index updated !!" << endl;
      return;
      break;
    }
    ptr = ptr->next;
    count++;
  }
  cout << "Index Out of bound !!" << endl;
}

node *deleteTheIndex(node *ptr, int index)
{
  if (index == 0)
  {
    return ptr->next;
  }
  int count = 1;
  node *start = ptr;
  node *postPtr = ptr;
  ptr = ptr->next;
  node *prePtr = ptr->next;
  while (ptr != NULL)
  {
    if (count == index)
    {
      postPtr->next = prePtr;
      return start;
    }
    postPtr = ptr;
    ptr = ptr->next;
    prePtr = ptr->next;
    count++;
  }
  cout << "Index out of bound !!" << endl;
  return start;
}

int main()
{
  node *newLinkList = createRandomList();
  display(newLinkList);
  int choice;

  while (choice != 0)
  {
    cout << "Enter your choice !!" << endl;
    cout << "Enter 1 to update the LinkList." << endl;
    cout << "Enter 2 to delete the index the LinkList." << endl;
    cout << "Enter 0 to exit this menu !!" << endl;
    cin >> choice;
    int index, value;
    switch (choice)
    {
    case 1:
      cout << "Enter index you want to update : " << endl;
      cin >> index;
      cout << "Enter value you want to update : " << endl;
      cin >> value;
      cout << endl
           << "A Node is udpated in the list !!";
      updateTheIndexValue(newLinkList, index, value);
      display(newLinkList);
      break;
    case 2:
      cout << "Enter index you want to delete  : " << endl;
      cin >> index;
      cout << endl
           << "A Node is deleted from the list !!";
      newLinkList = deleteTheIndex(newLinkList, index);
      display(newLinkList);
      break;
    default:

      break;
    }
  }
  return 0;
}