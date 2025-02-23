// distinction
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    vector<int> v;
    int n;
    cout << "How many elements you want to insert : ";
    cin >> n;
    cout << "Enter : ";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    for (auto i : v)
    {
        s.insert(i);
    }

    for (auto &i : s)
    {
        cout << i << " ";
    }
    cout << "number of distinct elements : " << s.size();

    return 0;
}