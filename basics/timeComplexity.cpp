// Time Complexity Example

#include <iostream>
using namespace std;

/*
Function Declaration
This function calculates sum of array elements
*/
int sumArray(int arr[], int n)
{ // O(1)

    int sum = 0; // O(1)

    for (int i = 0; i < n; i++)
    {                  // Loop runs n times
        sum += arr[i]; // O(1)
    }
    // Total loop complexity = O(n)

    return sum; // O(1)
}

int main()
{

    // Variable Declarations
    int n = 5;      // O(1)
    int result = 0; // O(1)

    // Array Declaration
    int arr[5] = {1, 2, 3, 4, 5}; // O(1)

    // If-Else Condition
    if (n > 0)
    {                           // O(1)
        cout << "Valid size\n"; // O(1)
    }
    else
    {                        // O(1)
        cout << "Invalid\n"; // O(1)
    }

    // For Loop
    for (int i = 0; i < n; i++)
    {                          // Runs n times
        cout << arr[i] << " "; // O(1)
    }
    // Total = O(n)

    cout << endl;

    // While Loop
    int i = 0; // O(1)

    while (i < n)
    {                     // Runs n times
        result += arr[i]; // O(1)
        i++;              // O(1)
    }
    // Total = O(n)

    // Function Call
    int total = sumArray(arr, n); // O(n)

    cout << "Sum = " << total << endl; // O(1)

    return 0; // O(1)
}

/*
=========================================
TIME COMPLEXITY CALCULATION
=========================================

Variable declarations      -> O(1)
Array declaration          -> O(1)
If-Else condition          -> O(1)
For loop                   -> O(n)
While loop                 -> O(n)
Function sumArray()        -> O(n)
Output statements          -> O(1)

Total complexity:

O(1) + O(1) + O(1) + O(n) + O(n) + O(n)

= O(3n + 3)

Ignore constants:

FINAL TIME COMPLEXITY

O(n)

=========================================
*/