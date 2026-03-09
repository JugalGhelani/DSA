// Palindrome String

#include <iostream>
#include <string>
using namespace std;

// Optimal approach
// bool isPalindrome(string s) {
//     int left = 0;
//     int right = s.length() - 1;

//     while (left < right) {

//         while (left < right && !isalnum(s[left])) {
//             left++;
//         }

//         while (left < right && !isalnum(s[right])) {
//             right--;
//         }

//         if (tolower(s[left]) != tolower(s[right])) {
//             return false;
//         }

//         left++;
//         right--;
//     }

//     return true;
// }

bool isPalindrome(string s, int i)
{
    if (i >= s.length() / 2)
    {
        return true;
    }
    if (s[i] != s[s.length() - i - 1])
    {
        return false;
    }
    return isPalindrome(s, i + 1);
}

int main()
{
    string s;
    cout << "Enter a String to check whether it is palindrome or not: ";
    cin >> s;
    bool result = isPalindrome(s, 0);
    cout << result << endl;
    return 0;
}