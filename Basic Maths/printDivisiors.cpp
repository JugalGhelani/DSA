// Print All Divisors

#include <iostream>
using namespace std;

void printDivisors(int num)
{
    cout << "The divisors of the " << num << " are: " << endl;
    // faster way
    vector<int> v;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            v.push_back(i);
            if (num / i != i)
            {
                v.push_back(num / i);
            }
        }
    }
    sort(v.begin(), v.end());
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *(i) << " ";
    }

    // for (int i = 1; i <= num; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
}

int main()
{
    int num;
    cout << "Enter the number that you wanna find its respective divisors: ";
    cin >> num;
    printDivisors(num);
    return 0;
}