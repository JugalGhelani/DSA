// Frequency Count of Numbers using map

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> mpp;
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements" << endl;
    
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        // mpp[arr[i]]++; // alternative way
    }

    for (int i = 0; i < size; i++)
    {
        mpp[arr[i]]++;
    }
    
    int num;
    int noOfQuery;
    cout << "Enter number of Queries you wanna run: ";
    cin >> noOfQuery;
    while (noOfQuery--)
    {
        cout << "Enter a number to count its frequency: ";
        cin >> num;
        cout << "Frequency: " << mpp[num] << endl;
    }
    return 0;
}