# Linked List

A **linked list** is a linear data structure that includes a series of connected **nodes**. Here, each node stores the data and the address of the next node.

We have to start somewhere, so we give the address of the first node a special name called **HEAD**. Also, the last node in the linked list can be identified because its next portion points to **NULL**.

Linked lists can be of multiple types: **singly**, **doubly** and **circular linked list**.

> Each node know the memory address of next node.

## Repesentation of Linked List

Here's how each node of the linked list is represented. Each node consists of a
**data** item and an **address** of another node

We wrap both the data item and the next node reference in a struct as:

**In CPP**

```cpp
class Node
{
  int data;
  Node *next;
};
```

Understanding the structue of a linked list node is the key to having a grasp on it.

Each struct node has a data item and a point to another struct node. For that we can create a simple Linked List with three items to understand it's working.

**In CPP**

```cpp
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
```

Now our linked list is like

```
HEAD -> [1 | next] -> [2 | next] -> [3 | next] -> NULL
```

The power of linked list comes from the ability to break the chain and rejoin it. Example: if we wanted to put an element 4 between 1 & 2, the steps would be:

- Create a new struct node and allocate memory to it.
- Add its data value as 4
- Point its not pointer to the struct node containing 2 as the data value
- Change the next pointer of "I" to the node we just created.

Doing something similar in an array would have required shifting the positions of all the subsequest elements.

## Linked List Utility

Lists are one of the most popular and efficient data structures, with implementation in every programming language like C, C++, Python, Java and C#.

Apart from that, linked list are a great way to learn how pointers work. By practicing how to manipulate linked list, linked list also helps us to learn more advanced data structures like graphs and trees.

## Linked List Operations

There are various linked list operations that allow us to perform different actions on linked lists. For example, the insertion operation adds a new element to the linked list.

Below are the basic linked list operations:

- **Traversal** - access each element of the linked list
- **Insertion** - adds a new element to the linked list
- **Deletion** - removes the existing elements
- **Search** - find a node in the linked list
- **Sort** - sort the nodes of the linked list

## Recall

- `head` points to the first node of the linked list
- `next` pointer of the last node is `NULL`, of if the next current node is `NULL`, It means that we've reached the end of the linked list.

## Traverse a Linked List (Singly LL)

Displaying the contents of a linked list is very simple. We keep mocing the temp node to the next one and display its content.

When `temp` is `NULL`, we know that we have reached the end of the linked list so we get out of the while loop.

**In CPP**

```cpp
Node *temp = head;

cout << "List elements are: ";

while (temp != NULL)
{
  cout << temp->data << " ";
  temp = temp->next;
}
cout << "NULL";
```

## Insertion in a Linked List (Singly LL) / Insert an Elements into the Linked List

We can add elements either at the beginning, middle or end of the linked list

### 1. Insert at the beginning

- Allocate memory for new node
- Store data
- Change next of new node to point to head
- Change head to point recently created node

**In CPP**

```cpp
void push(Node **head, int newData)
{
  Node *newNode = new Node();
  newNode->data = newData;
  newNode->next = (*head);
  (*head) = newNode;
}
```

## 2. Insert at the end

- Allocate memory for new node
- Store data
- Traverse to last node
- change next of last node to recently created node

**In CPP**

```cpp
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
```

## 3. Insert an element after a given previous node

- Check if the given previous node is NULL or not
- Allocate a new node
- Assign the data to the new node
- Make the next of new node as the next of previous node
- Move the next of the pervious node as a new node

```cpp
void insertAfter(Node *prevNode, int newData)
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
```

## Deletetion in Linked List

We can delete elements from a linked list present at the beginning, end and middle.

## 1. Delete from beginning

- Point head to the next node i.e. second node
- temp = head
- head = head->next
- then we'll free the unused memory

```cpp
void removeFirstNode(Node *head)
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
```

## 2. Delete the first occurrence of key

```cpp
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
    while (temp != NULL && temo->data != key)
    {
      prev = temp;
      temo = temo->next;
    }

    if (temp == NULL)
    {
      return;
    }

    prev->next = temp->next;

    delete temp;
  }
}
```

## 3. Delete last element from linked list

- If the first node is NULL or there is only one node then return NULL
- Create an extra space and traverse the linked list till the second last node
- Delete the last node (the next node of the second last node and set the value of the next second last node to NULL)

```cpp
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
```

## 4. Find length of linked list

- Initialize count as 0
- Initialize a node pointer, current = head;
- while current is not NULL
  - current = current->next
  - count++
- return cout

```cpp
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
```

## 5. Search an element in linked list

- Initialize a node pointer, current = head
- while current is not NULL
  - current->key is equal to the key being searched return true
  - current = current->next
- return false

```cpp
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
```
