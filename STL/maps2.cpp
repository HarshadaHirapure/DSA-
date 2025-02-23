// most frequent element
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    map<int, int> m;
    int val, n, result;
    cout << "enter the size of vector : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }

    for (auto i : v)
    {
        m[i]++;
    }
    for (auto &pair : m)
    {
        cout << pair.first << " " << pair.second << " " << endl;
    }
    for (auto it1 = m.begin(), it2 = next(m.begin()); it2 != m.end(); it1++, it2++)
    {
        if (it2->second >= it1->second)
        {
            result = it2->first;
        }
        else
        {

            result = it1->first;
        }
    }

    cout << result;
    return 0;
}