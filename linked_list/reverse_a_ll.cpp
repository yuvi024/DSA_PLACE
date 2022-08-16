#include <iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
};

struct LinkedList
{
  Node *head;
  LinkedList()
  {
    head = NULL;
  }

  Node *reverse(Node *head)
  {
    if (head == NULL || head->next == NULL)
    {
      return head;
    }

    Node *rest = reverse(head->next);
    head->next->next = head;

    head->next = NULL;

    return rest;
  }

  void print()
  {
    struct Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << ", ";
      temp = temp->next;
    }
    cout << "-> NULL";
  }

  void push(int data)
  {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
  }
};

int main()
{
  LinkedList ll;
  ll.push(10);
  ll.push(20);
  ll.push(30);
  ll.push(40);
  ll.push(50);

  cout << "Linked list before reversing: ";
  ll.print();
  cout << endl
       << endl;

  ll.head = ll.reverse(ll.head);

  cout << "Linked list after reversing: ";
  ll.print();

  return 0;
}