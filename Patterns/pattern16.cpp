// pattern 16
// E
// DE
// CDE
// BCDE
// ABCDE

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 65 + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    
    return 0;
}