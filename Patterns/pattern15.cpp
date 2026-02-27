// pattern 15
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 65;
        for (int j = 1; j < n-i+1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout << ch;
             if (j < i) { // j <= (2 * i - 1) / 2)
                ch++;
            } else {
                ch--;
            }
        }
        cout << endl;
        
    }
       
    return 0;
}