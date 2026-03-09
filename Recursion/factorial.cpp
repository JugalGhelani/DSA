// factorial

#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int main()
{
    int num;
    int fact = 1;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    int result = factorial(num);
    cout << "Factorial of " << num << " is " << result << endl;
}