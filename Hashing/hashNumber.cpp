// Frequency Count of Numbers

#include <iostream>
using namespace std;
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

    int hash[1000001] = {0}; // upto 1e6 + 1 and global var 1e7 + 1 but make sure var can't be hash because it is reserverd.

    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }

    int num;
    int noOfQuery;
    cout << "Enter number of Queries you wanna run: ";
    cin >> noOfQuery;
    while (noOfQuery--)
    {
        cout << "Enter a number to count its frequency: ";
        cin >> num;
        cout << "Frequency: " << hash[num] << endl;
    }
    return 0;
}