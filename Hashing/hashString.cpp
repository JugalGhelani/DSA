// Frequency Count of Characters

#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    char ch;
    int noOfQuery;

    cout << "Enter number of Queries you wanna run: ";
    cin >> noOfQuery;
    while (noOfQuery--)
    {
        cout << "Enter a character to count its frequency: ";
        cin >> ch;
        cout << "Frequency: " << hash[ch - 'a'] << endl;
    }
    return 0;
}