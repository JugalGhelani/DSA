// GCD or HCF

#include <iostream>
using namespace std;

int findGCD(int num1, int num2)
{
    // fast and optimal way (Euclidean algorithm)
    while (num2 != 0)
    {
        int rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }
    return num1;

    // for (int i = min(num1, num2); i >= 1; i--)
    // {
    //     if (num1 % i == 0 && num2 % i == 0)
    //     {
    //         return i;
    //     }
    // }
    return 1;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers to find GCD: ";
    cin >> num1 >> num2;
    int gcd = findGCD(num1, num2);
    cout << "GCD of " << num1 << " & " << num2 << " is " << gcd;
    return 0;
}