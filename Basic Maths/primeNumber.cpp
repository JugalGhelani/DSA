// Prime Number

#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        cout << "Invalid Input!" << endl;
        return false;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter a number to check whether it is prime or not: ";
    cin >> num;
    bool result = isPrime(num);
    if (!result)
    {
        cout << num << " is not a prime number" << endl;
    }
    else
    {
        cout << num << " is a prime number" << endl;
    }
    return 0;
}