#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
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

// List
void explainList()
{
    list<int> ls;
    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}
    ls.push_front(5);   // {5, 2, 4}
    ls.emplace_front(); // {0 5 2 4}

    // ls.insert(ls.begin(), 7); // takes more time

    // cout << ls[0]; // can't access the element via index
    for (auto i = ls.begin(); i != ls.end(); i++)
    {
        cout << *(i) << " "; // 0 5 2 4
    }
    cout << endl;
    for (int i : ls)
    {
        cout << i << " "; // 0 5 2 4
    }

    // rest functions same as vector
    // rbegin, rend, clear, insert, size, swap etc
}

// Deque
void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(4);    // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 2, 1}

    dq.pop_back();
    dq.pop_front();

    cout << dq[0] << endl; // can access the element via index

    for (auto i = dq.begin(); i != dq.end(); i++)
    {
        cout << *(i) << " "; // {4, 1}
    }
    cout << endl;
    for (int e : dq)
    {
        cout << e << " "; // {4, 1}
    }
    // rest functions same as vector
    // rbegin, rend, clear, insert, size, swap etc
}

// Stack
void explainStack()
{
    stack<int> st;

    st.push(1);    // {1}
    st.push(2);    // {2, 1}
    st.push(3);    // {3, 2, 1}
    st.push(3);    // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    // cout << st[0]; // can't access the element via index

    cout << st.top();

    st.pop();
    cout << st.top();
    cout << st.size();
    cout << st.empty();

    stack<int> st1;
    st.swap(st1);
    cout << "\nstack top to bottom: \n";
    while (!st1.empty())
    {
        cout << st1.top() << endl;
        st1.pop();
    }
}

// Queue
void explainQueue()
{
    queue<int> q;

    q.push(1);    // {1}
    q.emplace(2); // {1, 2}
    q.push(4);    // {1, 2, 4}

    q.back() += 5;
    cout << q.back() << " ";  // 9
    cout << q.front() << " "; // 1

    q.pop();           // {2, 9}
    cout << q.front(); // 2

    // cout << q[0] << endl; // can't access the element via index

    cout << "\nQueue elements (front to back): \n";

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}

// Priority Queue
void explainPriorityQueue()
{
    // Max Heap (default priority_queue)
    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top() << endl; // 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top() << endl; // 8

    // size(), swap(), empty() work same as other containers

    // Min Heap (using greater<int>)
    priority_queue<int, vector<int>, greater<int>> pqMin;

    pqMin.push(5);     // {5}
    pqMin.push(2);     // {2, 5}
    pqMin.push(8);     // {2, 5, 8}
    pqMin.emplace(10); // {2, 5, 8, 10}

    cout << pqMin.top() << endl; // 2
}

// Set
void explainSet()
{
    set<int> st;

    // Insertion
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}  (duplicate ignored)
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4}

    // cout << st[0]; // can't access the element via index

    // begin(), end(), rbegin(), rend()
    // size(), empty(), swap() same as other containers

    // Find
    auto it = st.find(3);  // returns iterator to 3
    auto it2 = st.find(6); // returns st.end() if not found

    // Erase by value (logarithmic time)
    st.erase(4); // removes 4

    // Count
    int cnt = st.count(1); // 1 if exists, else 0
    cout << "Count of 1: " << cnt << endl;

    // Erase by iterator (amortized constant time)
    auto it3 = st.find(3);
    st.erase(it3);

    // Erase range  [first, last)
    st.insert(4);
    st.insert(5); // now {1, 2, 4, 5}
    auto it4 = st.find(2);
    auto it5 = st.find(5);
    st.erase(it4, it5); // removes 2 and 4 (5 not included)

    // lower_bound & upper_bound
    auto lb = st.lower_bound(2); // first element >= 2
    auto ub = st.upper_bound(3); // first element > 3

    // Loop through
    for (int e : st)
    {
        cout << e << " ";
    }
}

// Multi Set
void explainMultiSet()
{
    // Everything same as set
    // Only difference: it allows duplicate elements

    multiset<int> ms;

    // Insertion (duplicates allowed)
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    ms.insert(1); // {1, 1, 1, 1}

    // cout << ms[0]; // can't access the element via index

    // Erase by value
    ms.erase(1); // removes ALL 1's

    // Insert again for further examples
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);

    // Count occurrences
    int cnt = ms.count(1); // number of times 1 appears
    cout << "Count of 1: " << cnt << endl;

    // Erase only ONE occurrence
    ms.erase(ms.find(1)); // removes only a single 1

    // Erase range  [first, last)
    auto it1 = ms.find(1);
    auto it2 = it1;
    advance(it2, 2); // move iterator 2 steps ahead

    ms.erase(it1, it2); // erase 2 elements

    // Loop through
    for (int e : ms)
    {
        cout << e << " ";
    }

    // rest all functions same as set:
    // find(), lower_bound(), upper_bound(), size(), empty()
}

// Unorder Set
void explainUSet()
{

    unordered_set<int> st;

    // Insertion
    st.insert(1);
    st.insert(2);
    st.insert(2); // duplicate ignored
    st.insert(4);
    st.insert(3);
    st.insert(6);

    // Iteration (order NOT sorted)
    cout << "Elements: ";
    for (auto it : st)
    {
        cout << it << " "; // 3 4 2 6 1
    }
    cout << endl;

    // Find
    auto it = st.find(3);
    if (it != st.end())
        cout << "Found 3\n";

    // Count
    int cnt = st.count(2); // 1 if exists, else 0
    cout << "Count of 2: " << cnt << endl;

    // Erase
    st.erase(2); // removes 2

    // Other Functions
    cout << "Size: " << st.size() << endl;
    cout << "Empty? " << st.empty() << endl;

    // lower_bound() and upper_bound() do NOT work
    // because unordered_set is NOT sorted
}

// Map
void explainMap()
{

    // Different ways to declare map
    map<int, int> mpp;
    // map<int, pair<int, int>> mpp;
    // map<pair<int, int>, int> mpp;

    // Insertion
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    mpp.insert({5, 10});

    // Iteration (always sorted by key)
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    // Accessing values
    cout << "Value at key 1: " << mpp[1] << endl;

    // If key doesn't exist, it creates with default value (0)
    cout << "Value at key 7: " << mpp[7] << endl;

    // Find
    auto it = mpp.find(3);
    if (it != mpp.end())
    {
        cout << "Found key 3 with value: " << it->second << endl;
    }

    // If key not found
    auto it2 = mpp.find(100);
    if (it2 == mpp.end())
    {
        cout << "Key 100 not found\n";
    }

    // lower_bound & upper_bound
    auto lb = mpp.lower_bound(2); // first key >= 2
    if (lb != mpp.end())
        cout << "Lower bound of 2: " << lb->first << endl;

    auto ub = mpp.upper_bound(3); // first key > 3
    if (ub != mpp.end())
        cout << "Upper bound of 3: " << ub->first << endl;

    // erase(), size(), empty(), swap() same as set

    // Multimap
    // Everything is same as map, only it can store duplicate keys
    // mpp[key] can't be used here.
}

// Custom Comparator
// Sort according to second element
// If second is same, sort by first in descending
bool comp(pair<int, int> p1, pair<int, int> p2)
{

    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    // If second elements are same
    if (p1.first > p2.first)
        return true;
    return false;
}

void explainExtra()
{

    // Sorting array
    int a[] = {4, 2, 1, 5, 3};
    int n = 5;

    sort(a, a + n);                 // sort full array
    sort(a + 1, a + 4);             // sort from index 1 to 3
    sort(a, a + n, greater<int>()); // sort in descending

    // Sorting vector
    vector<int> v = {5, 3, 2, 8, 1};
    sort(v.begin(), v.end());

    // Sorting array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    int m = 3;

    sort(arr, arr + m, comp);
    // Result: {4,1}, {2,1}, {1,2}

    // __builtin_popcount
    int num = 7;
    int cnt = __builtin_popcount(num); // number of set bits
    cout << "Set bits in 7: " << cnt << endl;

    long long num2 = 165786578687;
    int cnt2 = __builtin_popcountll(num2);
    cout << "Set bits in long long: " << cnt2 << endl;

    // next_permutation
    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // max_element
    int maxi = *max_element(a, a + n);
    cout << "Maximum element: " << maxi << endl;
}

int main()
{
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPriorityQueue();
    // explainSet();
    // explainMultiSet();
    // explainUSet();
    // explainMap();
    explainExtra();

    return 0;
}