#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{

  // loop to access each array element
  for (int step = 0; step < size; ++step)
  {

    // loop to compare array elements
    for (int i = 0; i < size - step; ++i)
    {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1])
      {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

int main()
{
  int n, arr[100];
  cout << "Enter the number of elements to be entered: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  bubbleSort(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}