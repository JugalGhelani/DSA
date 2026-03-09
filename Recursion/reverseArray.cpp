// Reverse Array

#include <iostream>
using namespace std;

void reverseArr(int arr[], int i, int size)
{
    if (i >= size / 2)
    {
        return;
    }
    swap(arr[i], arr[size - i - 1]);
    reverseArr(arr, i + 1, size);
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Array before reversed
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArr(arr, 0, size);

    // Array after reversed
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}