# Doubly Linked List

A doubly linked list contains an extra pointer, typically called previous pointer, together with the next pointer and data which are there in singly linked list

```cpp
class Node
{
public:
  int data;
  Node *next;
  Node *prev;
};
```

## Advantages of doubly linked list over singly

1. A Doubly Linked List (DLL) can be traversed in both forward and backward directions.
2. The delete operation in DLL is more efficient if a pointer to the node to be deleted is given.
3. We can quickly insert a new node before a given node.

In a singly linked list, to delete a node, a pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using the previous pointer.

## Disadvantages of doubly linked list over singly

1. Every node of DLL Requires extra space for a previous pointer. It is possible to implement DLL with a single pointer though.
2. All operations require an extra pointer previous to be maintained. For example, in insertion, we need to modify previous pointers together with the next pointers. For example in the following functions for insertions at different positions, we need 1 or 2 extra steps to set the previous pointer.

### Insertion

A node can be added in four ways

- At the front of the DLL
- After a given node.
- At the end of the DLL
- Before a given node.

## Inserting a node at the front

```cpp
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
```

## Inserting a node after a given node

```cpp
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
```

## Insert a node at the end

```cpp
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
```

## Delete a node in Doubly Linked List

```cpp
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
```

## Reverse a doubly linked list

```cpp
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
```
