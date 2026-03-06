// Reverse Number

#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int lastDigit = num % 10;
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
        {
            return 0;
        }
        rev = rev * 10 + lastDigit;
        num /= 10;
    }
    return rev;
}
int main()
{
    int num;
    cout << "Enter the number that you wanna reverse: ";
    cin >> num;
    cout << "The reverse number of " << num << " is " << reverseNumber(num);
    return 0;
}