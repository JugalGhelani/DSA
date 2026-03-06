// Palindrome Number

#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int orgNum = num;
    int rev = 0;
    if (num < 0)
    {
        return false;
    }

    while (num != 0)
    {
        int lastDigit = num % 10;
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
        {
            return false;
        }
        rev = rev * 10 + lastDigit;
        num /= 10;
    }
    if (rev == orgNum)
    {
        return true;
    }
    return false;
}

int main()
{
    int num;
    cout << "Enter a number to check whether it is palindrome or not: ";
    cin >> num;
    bool result = isPalindrome(num);
    cout << result << endl;
    return 0;
}