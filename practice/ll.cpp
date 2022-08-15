#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

// insert at head (push)
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

// print array
void print_arr(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
}

int main()
{
  Node *head = NULL;

  // insert at head
  insertAtHead(&head, 100);

  // insert after a specific node
  insertAfterNode(head, 90);

  // insert at the end
  insertAtEnd(&head, 300);

  // print array
  cout << "Created Linked List: ";
  print_arr(head);

  return 0;
}