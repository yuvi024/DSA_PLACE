# Circular Linked List

The circular linked list is a linked list where all nodes are connected to form a circle. In a circular linked list, the first node are connected to each other which forms a circle. There is no NULL at the end.

There are two types of circular linked list

1. **Circular singly linked list**: In a circular singly linked list, the last node of the list containst a pointer to the first node of the list. We traverse the circular singly linked list until we reach the same node where we started. The ccircular singly linked list has no beginning or end. No null value is present in the next part of any of the nodes.

2. **Circular doubly linked list**: Circular doubly linked list has properties of both doubly linked list and circular linked list in which two consecutive elements are linked or connected by the previous and next pointer and the last node points to the first node by the next pointer and also the first node points to the last node by the previous pointer.

```cpp
class Node {
public:
  int value;
  Node *next;
};
```

## Creating a basic circular singly linked list

```cpp
node one = new Node(1);
node two = new Node(2);
node three = new Node(3);

one.next = two;
two.next = three;
three.next = one;
```

## Insertion in circular linked list

### Add to Empty

```cpp
struct Node *addToEmpty(struct Node *last, int data)
{
  if (last != NULL)
  {
    return last;
  }

  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

  newNode->data = data;

  last = newNode;

  last->next = last;

  return last;
}
```

### Add node to the front

```cpp
struct Node *addFront(struct Node *last, int data)
{
  if (last == NULL)
  {
    return addToEmpty(last, data);
  }

  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

  newNode->data = data;

  newNode->next = last->next;

  last->next = newNode;

  return last;
}
```

### Add to the end

```cpp
struct Node *addEnd(struct Node *last, int data)
{
  if (last == NULL)
  {
    return addToEmpty(last, data);
  }

  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

  newNode->data = data;

  newNode->next = last->next;

  last->next = newNode;

  last = newNode;

  return last;
}
```

### Insert node after a specific node

```cpp
struct Node *addAfter(struct Node *last, int data, int item)
{
  if (last == NULL)
  {
    return NULL;
  }

  struct Node *newNode, *p;

  p = last->next;
  do
  {
    if (p->data == item)
    {
      newNode = (struct Node *)malloc(sizeof(struct Node));

      newNode->data = data;

      newNode->next = p->next;

      p->next = newNode;

      if (p == last)
      {
        last = newNode;
      }
      return last;
    }

    p = p->next;
  } while (p != last->next);

  cout << "\nThe given node is not present in the list" << endl;
  return last;
}
```

## Deletion in circular linked list

### Delete a node

```cpp
void deleteNode(Node **last, int key)
{
  if (*last == NULL)
  {
    return;
  }

  if ((*last)->data == key && (*last)->next == *last)
  {
    free(*last);
    *last = NULL;
    return;
  }

  Node *temp = *last, *d;

  if ((*last)->data == key)
  {
    while (temp->next != *last)
      temp = temp->next;

    temp->next = (*last)->next;
    free(*last);
    *last = temp->next;
  }

  while (temp->next != *last && temp->next->data != key)
  {
    temp = temp->next;
  }

  if (temp->next->data == key)
  {
    d = temp->next;
    temp->next = d->next;
    free(d);
  }
}
```
