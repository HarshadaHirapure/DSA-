// power set
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    vector<int> v;
    int n;
    cout << "How many elements you want to insert : ";
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    for (auto &i : v)
    {
        s.insert(i);
    }
    cout << "Power sets : ";
    cout << "[ ]";
    for (auto &i : s)
    {
        cout << "[" << i << "]";
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        for (auto it2 = next(it); it2 != s.end(); it2++)
        {

            cout << "[" << *it << "," << *it2 << "]";
        }
    }
    return 0;
}