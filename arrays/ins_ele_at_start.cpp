#include <iostream>
using namespace std;

class ins_ele_at_start
{
public:
  int a[50], n;
  void add_elem()
  {
    cout << "enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    cout << "your array: ";
    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
    cout << endl;
  }
  void insert_elem()
  {
    int b, temp;
    cout << "enter the number you want to insert at beg: ";
    cin >> b;
    for (int i = 0; i < n + 1; i++)
    {
      temp = a[i];
      a[i] = b;
      b = temp;
    }
    cout << "your new array: ";
    for (int i = 0; i < n + 1; i++)
    {
      cout << a[i] << " ";
    }
  }
};
int main()
{
  ins_ele_at_start IAT;
  IAT.add_elem();
  IAT.insert_elem();
}
