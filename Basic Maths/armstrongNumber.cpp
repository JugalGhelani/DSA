// Armstrong Number

#include <iostream>
using namespace std;

bool isArmstrong(int num)
{
    int orgNum = num;
    int temp = num;
    int armstrongNum = 0;

    if (num < 0)
    {
        return false;
    }

    int digits = 0;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    while (num != 0)
    {
        int lastDigit = num % 10;
        armstrongNum += pow(lastDigit, digits);
        num /= 10;
    }
    if (armstrongNum == orgNum)
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
    bool result = isArmstrong(num);
    cout << result << endl;
    return 0;
}