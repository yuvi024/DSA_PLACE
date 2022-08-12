#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
};

void insertAfter(Node *prev_node, int new_data)
{
  if (prev_node == NULL)
  {
    cout << "Previous node can't be NULL.";
    return ;
  }

  Node *new_node = new Node();

  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

int main()
{
  Node *head = NULL;
  Node *two = NULL;
  Node *three = NULL;
  Node *four = NULL;

  head = new Node();
  two = new Node();
  three = new Node();
  four = new Node();

  head->data = 10;
  head->next = two;

  two->data = 20;
  two->next = three;

  three->data = 30;
  three->next = four;

  four->data = 40;
  four->next = NULL;

  insertAfter(two->next, 70);

  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }

  return 0;
}
