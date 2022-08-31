#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> st;

  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);

  cout << "After adding elements into stack: ";
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }

  st.push(3);
  st.push(4);
  st.push(5);

  cout << "\nonly 3 elements: ";
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
}