#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

void printlist(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
}

void append(Node **head_ref, int new_data)
{
  Node *new_node = new Node();
  Node *last = *head_ref;

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL)
  {
    *head_ref = new_node;
    return;
  }

  while (last->next != NULL)
  {
    last = last->next;
  }

  last->next = new_node;
  return;
}

int main()
{
  Node *head = NULL;

  append(&head, 70);

  printlist(head);

  return 0;
}