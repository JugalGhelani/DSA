// pattern 8
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= 2 * n - i; j++)  // j = 1; j =  2 * (n - i) + 1
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}