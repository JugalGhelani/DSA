#include <iostream>
#include <vector>
using namespace std;

// Pairs
void explainPair()
{
    pair<int, int> p = {7, 18};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> x = {7, {10, 18}};
    cout << x.first << " " << x.second.second << " " << x.second.first << endl;
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
}

// Vector
void explainVector()
{
    vector<pair<int, int>> v;
    v.push_back({4, 9});
    v.emplace_back(8, 7);

    vector<int> v1(3, 7); // {7,7,7}
    // vector<int> v1(3); // {0,0,0}
    vector<int> v2(v1); // {7,7,7}

    vector<int> v3;
    v3 = {1, 4, 8, 9, 140};

    cout << v3[4] << endl;
    cout << v3.at(3) << endl;

    // iterator
    for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto it = v3.begin(); it != v3.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto it : v3)
    {
        cout << it << " "; // here * is not because auto(int) detact vector as elements not memory address
    }
    cout << endl;

    // Erase function
    vector<int> v4;
    v4 = {10, 20, 12, 23, 35, 45, 39};
    v4.erase(v4.begin() + 1);                 // removes 20
    v4.erase(v4.begin() + 2, v4.begin() + 4); // removes 12, 23

    // Insert function
    vector<int> v5(2, 100);           // 100 100
    v5.insert(v5.begin(), 300);       // 300 100 100
    v5.insert(v5.begin() + 1, 2, 10); // 300 10 10 100 100
    for (auto it = v5.begin(); it != v5.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // Copy
    vector<int> copy(2, 50);
    v5.insert(v5.begin() + 1, copy.begin(), copy.end()); // 300 50 50 10 10 100 100
    for (auto it = v5.begin(); it != v5.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // Size of vector
    cout << v5.size() << endl; // 7

    // Pop_back function
    v5.pop_back();

    // Swap function
    v3.swap(v4); // swap element of each other

    // Clear function
    v2.clear();

    // Empty function
    cout << v2.empty() << endl; // 1
}

int main()
{
    // explainPair();
    explainVector();
    return 0;
}