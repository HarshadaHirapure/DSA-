// duplicate elements in array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    unordered_set<int> s;
    unordered_map<int, int> m;
    cout << "Enter how many elements you want to insert : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (auto i : v)
    {
        s.insert(i);
    }
    for (auto i : s)
    {
        for (auto it = v.begin(); it != v.end(); it++)
        {
            if (i == *it || *it == i)
            {
                m[i]++;
            }
        }
    }

    for (auto &pair : m)
    {
        if (pair.second >= 2)

            cout << pair.first << "  " << pair.second;
    }

    return 0;
}