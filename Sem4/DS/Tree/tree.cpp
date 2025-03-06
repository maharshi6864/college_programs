#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;
};

node *tree = NULL;

void insert(int number)
{
  node *parentPtr, *ptr, *newNode;

  newNode = new node();
  newNode->data = number;
  if (tree == NULL)
  {
    newNode->left = NULL;
    newNode->right = NULL;
    tree = newNode;
  }
  else
  {
    ptr = tree;
    while (ptr != NULL)
    {
      parentPtr = ptr;
      if (number < ptr->data)
      {
        ptr = ptr->left;
      }
      else
      {
        ptr = ptr->right;
      }
    }

    if (number < parentPtr->data)
    {
      parentPtr->left = newNode;
    }
    else
    {
      parentPtr->right = newNode;
    }
  }
}

void postOrder(node *tree)
{
  if (tree != NULL)
  {
    postOrder(tree->left);
    postOrder(tree->right);
    cout << tree->data << endl;
  }
}

void preOrder(node *tree)
{
  if (tree != NULL)
  {
    cout << tree->data << endl;
    preOrder(tree->left);
    preOrder(tree->right);
  }
}

void inOrder(node *tree)
{
  if (tree != NULL)
  {
    inOrder(tree->left);
    cout << tree->data << endl;
    inOrder(tree->right);
  }
}

void addValuesInTheTree()
{
  while (true)
  {
    int number;
    cin >> number;
    if (number != -1)
    {
      insert(number);
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
    cout << "Enter 1 to insert values in the tree !!" << endl;
    cout << "Enter 2 to insert a single value in tree !!" << endl;
    cout << "Enter 3 to display in pre order !!" << endl;
    cout << "Enter 4 to display in post order !!" << endl;
    cout << "Enter 5 to display in in order !!" << endl;
    cout << "Enter 6 to exit the menu !!" << endl;
    int number;
    int choice = 0;
    int value;
    cin >> choice;
    switch (choice)
    {
    case 1:

      cout << "Enter values in the tree (enter -1 to exit the entering the value): ";
      addValuesInTheTree();
      break;
    case 2:
      cout << "Enter value to push in the tree : ";
      cin >> number;
      insert(number);
      break;
    case 3:
      preOrder(tree);
      break;
    case 4:
      postOrder(tree);
      break;
    case 5:
      inOrder(tree);
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