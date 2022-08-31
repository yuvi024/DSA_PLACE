#include <iostream>
using namespace std;

#define MAX 10
int n = 0;

struct stack
{
  int item[MAX];
  int top;
};

typedef stack st;

void createEmptyStack(stack *s)
{
  s->top = -1;
}

int isFull(stack *s)
{
  if (s->top == MAX - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int isEmpty(stack *s)
{
  if (s->top == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int push(stack *s, int data)
{
  if (isFull(s))
  {
    cout << "stack is full" << endl;
  }
  else
  {
    s->top++;
    s->item[s->top] = data;
  }
  n++;
}

int pop(stack *s)
{
  if (isEmpty(s))
  {
    cout << "stack is empty" << endl;
  }
  else
  {
    cout << "Item removed (popped): " << s->item[s->top] << endl;
    s->top--;
  }
  n--;
}

void printStack(stack *s)
{
  for (int i = 0; i < n; i++)
  {
    cout << s->item[i] << " ";
  }
  cout << endl;
}

int main()
{
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);

  cout << "stack: ";
  printStack(s);
  cout << endl;

  pop(s);
  pop(s);

  cout << "\nAfter removing top: ";
  printStack(s);
}