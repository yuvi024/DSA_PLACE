#include <iostream>
#include <stack>
using namespace std;

// stack methods: push(), pop(), top(), size(), empty()

void printStack(stack<string> lol)
{
  while (!lol.empty())
  {
    cout << lol.top() << " ";
    lol.pop();
  }
}

int main()
{
  stack<string> colors;

  // push elements in stack
  colors.push("blue");
  colors.push("green");
  colors.push("red");

  cout << "Stack: ";
  printStack(colors);
  cout << endl
       << endl;

  // accessing the topmost element
  string top = colors.top();
  cout << "The element on top is: " << top << endl
       << endl;

  // check size of stack
  int size = colors.size();
  cout << "Size of current stack is: " << size << endl
       << endl;

  // remove the top most element (stack follow LIFO (Last In First Out))
  colors.pop();

  cout << "After removing elem from stack: ";
  printStack(colors);
  cout << endl
       << endl;

  // check if stack is empty or not
  if (colors.empty() == true)
  {
    cout << "Stack is Empty..." << endl;
  }
  else
  {
    cout << "Stack isn't Empty..." << endl;
  }

  return 0;
}