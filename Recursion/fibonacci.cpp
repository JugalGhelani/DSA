// Fibonacci

#include <iostream>
using namespace std;

int fibonacci(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
    int num;
    cout << "Enter a number to find that element from  fibonacci series: ";
    cin >> num;
    int result = fibonacci(num);
    cout << "Fibonacci element at " << num << " is " << result << endl;
}