/*
 * Insertion at head in a linked list using member functions and using head member variable
 */

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

class LinkedList
{
private:
  Node *head;

public:
  LinkedList()
  {
    head = NULL;
  }

  void insert_at_front(int data);
  void printList();
};

void LinkedList::insert_at_front(int data)
{
  Node *new_node = new Node();

  new_node->data = data;

  new_node->next = head;

  head = new_node;

  cout << "Inserted: " << new_node->data << endl;
}

void LinkedList::printList()
{
  Node *node = new Node();
  node = head;

  cout << "Linked List: ";

  while (node != NULL)
  {
    cout << node->data << " ";
    node = node->next;
  }
}

int main()
{
  LinkedList *new_list = new LinkedList();

  new_list->insert_at_front(1);
  new_list->insert_at_front(2);
  new_list->insert_at_front(3);
  new_list->insert_at_front(4);
  new_list->insert_at_front(5);

  new_list->printList();

  return 0;
}