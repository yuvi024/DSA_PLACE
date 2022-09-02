#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
};

void push(Node **head, int newData)
{
  Node *new_node = new Node();

  new_node->data = newData;
  new_node->next = (*head);
  new_node->prev = NULL;

  if ((*head) != NULL)
  {
    (*head)->prev = new_node;
  }

  (*head) = new_node;
}

void inserAfter(Node *prev_node, int newData)
{
  if (prev_node == NULL)
  {
    cout << "Given previous node can't be NULL\n";
    return;
  }

  Node *new_node = new Node();

  new_node->data = newData;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
  new_node->prev = prev_node;

  if (new_node->next != NULL)
  {
    new_node->next->prev = new_node;
  }
}

void append(Node **head, int new_data)
{
  Node *new_node = new Node();

  Node *last = *head;

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head == NULL)
  {
    new_node->prev = NULL;
    *head = new_node;
    return;
  }

  while (last->next != NULL)
  {
    last = last->next;
  }

  last->next = new_node;

  new_node->prev = last;
}

void deleteNode(Node **head, Node *del)
{
  if (*head == NULL || del == NULL)
  {
    return;
  }

  if (*head == del)
  {
    *head = del->next;
  }

  if (del->next != NULL)
  {
    del->next->prev = del->prev;
  }

  if (del->prev != NULL)
  {
    del->prev->next = del->next;
  }

  free(del);
  return;
}

void reverse(Node **head)
{
  Node *temp = NULL;
  Node *current = *head;

  while (current != NULL)
  {
    temp = current->prev;
    current->prev = current->next;
    current->next = temp;
    current = current->prev;
  }

  if (temp != NULL)
  {
    *head = temp->prev;
  }
}

void printBothOrder(Node *head)
{
  Node *last;

  cout << "\nForward direction: ";
  while (head != NULL)
  {
    cout << " " << head->data << " ";
    last = head;
    head = head->next;
  }

  cout << "\nReverse direction: ";
  while (last != NULL)
  {
    cout << " " << last->data << " ";
    last = last->prev;
  }
}

void printll(Node *head)
{
  while (head != NULL)
  {
    cout << " " << head->data << " ";
    head = head->next;
  }
}

int main()
{

  Node *head = NULL;

  // append(&head, 1);
  
  push(&head, 2);
  push(&head, 3);
  push(&head, 4);
  push(&head, 5);
  push(&head, 6);
  
  // append(&head, 7);
  
  // inserAfter(head->next, 9);

  // reverse(&head)
  
  cout << "Created doubly linked list";
  printBothOrder(head);

  deleteNode(&head, head);       // delete first node
  deleteNode(&head, head->next); // delete middle node
  deleteNode(&head, head->next); // delete last node

  cout << "\nAfter deleting a node:";
  printll(head);


  return 0;
}
