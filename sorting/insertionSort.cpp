// Insertion Sort

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, size);

    cout << "Array after sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}