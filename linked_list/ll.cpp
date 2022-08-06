#include <iostream>
using namespace std;

// Node Class
class Node
{
public:
  int data;
  Node *next;
};

int main()
{
  // setting initial value as NULL
  Node *head = NULL;
  Node *two = NULL;
  Node *three = NULL;

  // allocating 3 nodes in heap
  head = new Node();
  two = new Node();
  three = new Node();

  // data value of head element as 1
  // next (pointer value) pointing to one
  head->data = 1;
  head->next = two;

  // data value of head element as 2
  // next (pointer value) pointing to two
  two->data = 2;
  two->next = three;

  // data value of head element as 3
  // next (pointer value) pointing to NULL
  three->data = 3;
  three->next = NULL;

  // while value of head is not eq. NULL print data of head and
  // set head eq to next value.
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }

  return 0;
}