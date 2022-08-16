#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

// insert at head
void insertAtHead(Node **head_ref, int data)
{
  Node *new_node = new Node();
  new_node->data = data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

// insert after a specific node
void insertAfterNode(Node *prev_node, int new_data)
{
  if (prev_node == NULL)
  {
    cout << "The given node cannot be NULL";
    return;
  }

  Node *new_node = new Node();
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

// insert node at the end
void insertAtEnd(Node **head_ref, int new_data)
{
  Node *new_node = new Node();
  Node *last = *head_ref;

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL)
  {
    *head_ref = new_node;
  }

  while (last->next != NULL)
  {
    last = last->next;
  }

  last->next = new_node;
  return;
}

// delete node at head
void deleteAtHead(Node **head, int key)
{
  Node *temp = new Node();

  if ((*head)->data == key)
  {
    temp = *head;
    *head = (*head)->next;
    free(temp);
  }
}

// deletion node at middle
void deleteInMid(Node **head_ref, int key)
{
  Node *temp = *head_ref;
  Node *prev = NULL;

  if (temp != NULL && temp->data == key)
  {
    *head_ref = temp->next;
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

// search a node
bool searchNode(struct Node **head_ref, int key)
{
  struct Node *current = *head_ref;

  while (current != NULL)
  {
    if (current->data == key)
    {
      return true;
    }
    current = current->next;
  }
  return false;
}

// sort a linked list
void sortLL(Node **head_ref)
{
  Node *current = *head_ref;
  Node *index = NULL;

  int temp;

  if (head_ref == NULL)
  {
    return;
  }
  else
  {
    while (current != NULL)
    {
      // index will point the node next to current node
      index = current->next;

      while (index != NULL)
      {
        if (current->data > index->data)
        {
          temp = current->data;
          current->data = index->data;
          index->data = temp;
        }
        index = index->next;
      }
      current = current->next;
    }
  }
}

// print array
void print_arr(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << ", ";
    head = head->next;
  }
  cout << "-> NULL";
}

int main()
{
  Node *head = NULL;

  // insert at head
  insertAtHead(&head, 10);
  cout << "After inserting at head: ";
  print_arr(head);
  cout << endl
       << endl;

  // insert after a specific node
  insertAfterNode(head, 100);
  insertAfterNode(head, 200);
  insertAfterNode(head, 300);
  insertAfterNode(head, 400);
  insertAfterNode(head, 500);
  cout << "After inserting after node: ";
  print_arr(head);
  cout << endl
       << endl;

  // insert at the end
  insertAtEnd(&head, 1000);
  insertAtEnd(&head, 2000);
  insertAtEnd(&head, 3000);
  insertAtEnd(&head, 4000);
  insertAtEnd(&head, 5000);
  cout << "After inserting at end: ";
  print_arr(head);
  cout << endl
       << endl;

  // searching element
  int searchFor = 300;

  if (searchNode(&head, searchFor) == true)
  {
    cout << "Element " << searchFor << " is located in this LL." << endl
         << endl;
  }
  else
  {
    cout << "Element " << searchFor << " is missing." << endl
         << endl;
  }

  // unsorted linked list
  cout << "Unsorted LL: ";
  print_arr(head);
  cout << endl
       << endl;

  // sorted linked list
  cout << "Sorted LL: ";
  sortLL(&head);
  print_arr(head);

  return 0;
}