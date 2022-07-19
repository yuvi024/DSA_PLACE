#include <iostream>
#include <algorithm>

using namespace std;

class bubbleSort
{
public:
  void sort(int array[], int size)
  {

    // access array elem
    for (int step = 0; step < (size - 1); ++step)
    {
      // swap check
      int swapped = 0;
      // compare two elem
      for (int i = 0; i < (size - step - 1); ++i)
      {
        // two array elem change > to < to sort in descending order
        if (array[i] > array[i + 1])
        {
          // swap if elements are not in intended order
          int temp = array[i];
          array[i] = array[i + 1];
          array[i + 1] = temp;
          swapped = 1;
        }
      }
      // no swapping if array is already sorted
      if (swapped == 0)
        break;
    }
  }

  void printArray(int array[], int size)
  {
    cout << "Sorted Array in Ascending Order: ";
    for (int i = 0; i < size; ++i)
    {
      cout << array[i] << " ";
    }
    cout << "\n";
  }
};

int main()
{
  bubbleSort sortingObj;

  int arr[100], n;

  cout << "Enter number of elements to be entered: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sortingObj.sort(arr, n);
  sortingObj.printArray(arr, n);
}