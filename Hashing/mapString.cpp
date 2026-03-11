// Frequency Count of Characters using map

#include <iostream>
#include <map>
using namespace std;
int main()
{
    // it is better to use unorder_map for better time complexity upto O(1)
    map<char, int> mpp;
    string s;
    cout << "Enter the string: ";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    // for (auto it : mpp)
    // {
    //     cout << it.first << "->" << it.second << endl;
    // }

    char ch;
    int noOfQuery;

    cout << "Enter number of Queries you wanna run: ";
    cin >> noOfQuery;
    while (noOfQuery--)
    {
        cout << "Enter a character to count its frequency: ";
        cin >> ch;
        cout << "Frequency: " << mpp[ch] << endl;
    }
    return 0;
}