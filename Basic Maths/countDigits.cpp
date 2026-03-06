// Count Digits

#include <iostream>
using namespace std;

int countDigits(int num)
{
    // Fast way to do this
    // int count = (int)(log10(num) + 1);
    if (num == 0)
    {
        return 1;
    }

    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }

    return count;
}

int main()
{
    int num;
    cout << "Enter the number to count its no. of digits: ";
    cin >> num;
    int digits = countDigits(num);
    cout << "No. of digits in " << num << " is: " << digits << endl;
    return 0;
}