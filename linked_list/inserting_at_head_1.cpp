/*
* Insertion at head in a linked list using non-member functions and passing head explicitly
*/

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

void insert_at_start(Node **head, int new_data)
{
  Node *new_elem = new Node();
  new_elem->data = new_data;
  new_elem->next = *head;
  *head = new_elem;
}

int main()
{
  Node *head = new Node();
  Node *two = new Node();
  Node *three = new Node();

  head->data = 10;
  head->next = two;

  two->data = 20;
  two->next = three;

  three->data = 30;
  three->next = NULL;

  cout << "Before Insertion: ";
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }

  cout << endl;

  insert_at_start(&head, 100);
  insert_at_start(&head, 200);
  insert_at_start(&head, 300);
  insert_at_start(&head, 400);

  cout << "After Insertion: ";
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }

  return 0;
}