#include <iostream>
using namespace std;

// Node structure
struct Node
{
  int data;
  Node *next;

  Node(int val) : data(val), next(nullptr) {} // Constructor
};

// LinkedList class
class LinkedList
{
private:
  Node *head;

public:
  LinkedList() : head(nullptr) {}

  // Add a node at the end
  void append(int value)
  {
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
      head = newNode;
    }
    else
    {
      Node *temp = head;
      while (temp->next != nullptr)
      {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }

  // Display the list
  void display()
  {
    if (head == nullptr)
    {
      cout << "List is empty." << endl;
      return;
    }
    Node *temp = head;
    while (temp != nullptr)
    {
      cout << temp->data << " -> ";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }

  // Delete a node by value
  void deleteNode(int value)
  {
    if (head == nullptr)
    {
      cout << "List is empty. Nothing to delete." << endl;
      return;
    }

    // If the node to delete is the head
    if (head->data == value)
    {
      Node *temp = head;
      head = head->next;
      delete temp;
      return;
    }

    // Find the node to delete
    Node *temp = head;
    while (temp->next != nullptr && temp->next->data != value)
    {
      temp = temp->next;
    }

    if (temp->next == nullptr)
    {
      cout << "Value not found in the list." << endl;
    }
    else
    {
      Node *nodeToDelete = temp->next;
      temp->next = temp->next->next;
      delete nodeToDelete;
    }
  }

  // Destructor to clean up memory
  ~LinkedList()
  {
    Node *temp;
    while (head != nullptr)
    {
      temp = head;
      head = head->next;
      delete temp;
    }
  }
};

// Main function to test the linked list
int main()
{
  LinkedList list;

  // Add nodes
  list.append(10);
  list.append(20);
  list.append(30);

  // Display the list
  cout << "Linked List: ";
  list.display();

  // Delete a node
  cout << "Deleting 20..." << endl;
  list.deleteNode(20);

  // Display the list after deletion
  cout << "Linked List after deletion: ";
  list.display();

  return 0;
}
