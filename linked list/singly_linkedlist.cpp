#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

void push(Node **head, int newData)
{
  Node *newNode = new Node();
  newNode->data = newData;
  newNode->next = (*head);
  (*head) = newNode;
}

void insertAtEnd(Node **head, int newData)
{
  Node *newNode = new Node();
  Node *last = *head;

  newNode->data = newData;
  newNode->next = NULL;

  if (*head == NULL)
  {
    *head = newNode;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = newNode;
  return;
}

void insertAfterNode(Node *prevNode, int newData)
{
  if (prevNode == NULL)
  {
    cout << "The given previous node can't be NULL\n";
    return;
  }

  Node *newNode = new Node();
  newNode->data = newData;
  newNode->next = prevNode->next;
  prevNode->next = newNode;
}

void deleteNode(Node **head, int key)
{
  Node *temp = *head;
  Node *prev = NULL;

  if (temp != NULL && temp->data == key)
  {
    *head = temp->next;

    delete temp;
    return;
  }
  else
  {
    while (temp != NULL && temp->data != key)
    {
      prev = temp;
      temp = temp->next;
    }

    if (temp == NULL)
    {
      return;
    }

    prev->next = temp->next;

    delete temp;
  }
}

Node *removeFirstNode(Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }

  Node *temp = head;
  head = head->next;

  delete temp;
  return head;
}

Node *removeLastNode(Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }

  if (head->next == NULL)
  {
    delete head;
    return NULL;
  }

  Node *second_last = head;

  while (second_last->next->next != NULL)
  {
    second_last = second_last->next;
  }

  delete (second_last->next);

  second_last->next = NULL;

  return head;
}

int findLen(Node *head)
{
  int count = 0;
  Node *current = head;
  while (current != NULL)
  {
    count++;
    current = current->next;
  }
  return count;
}

bool search(Node *head, int x)
{
  Node *current = head;
  while (current != NULL)
  {
    if (current->data == x)
    {
      return true;
    }
    current = current->next;
  }
  return false;
}

void printll(Node *p)
{
  while (p != NULL)
  {
    cout << p->data << " -> ";
    p = p->next;
  }
  cout << "NULL\n";
}

int main()
{
  /*
  Node *head;
  Node *one = NULL;
  Node *two = NULL;
  Node *three = NULL;

  one = new Node();
  two = new Node();
  three = new Node();

  one->data = 1;
  two->data = 2;
  three->data = 3;

  one->next = two;
  two->next = three;
  three->next = NULL;

  head = one;
  */

  Node *head = NULL;

  insertAtEnd(&head, 6);

  push(&head, 5);

  push(&head, 4);

  insertAtEnd(&head, 1);

  insertAtEnd(&head, 2);

  cout << "Generated Linked List: ";
  printll(head);
  cout << endl;

  cout << "Length of linked list: ";
  cout << findLen(head) << endl
       << endl;

  deleteNode(&head, 1);
  cout << "After deleting 1 from linked list: ";
  printll(head);
  cout << endl;

  head = removeFirstNode(head);
  cout << "After removing first element of linked list: ";
  printll(head);
  cout << endl;

  head = removeLastNode(head);
  cout << "After removing last element of linked list: ";
  printll(head);
  cout << endl;

  cout << "Search for 6 in linked list: ";
  search(head, 6) ? cout << "Yes\n" : cout << "No\n";

  return 0;
}