// pattern 14
// ABCDE
// ABCD
// ABC
// AB
// A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 65;
        // for(char j = 'A'; j <= 'A' + (n - i); j++)
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}