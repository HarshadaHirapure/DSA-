// count distinct element
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> m;
    vector<int> v;
    int n, i, value;
    cout << "Enter the size of array : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }
    for (auto &i : v)
    {
        cout << i << " ";
    }

    for (auto i : v)
    {
        m[i]++;
    }
    cout << endl
         << m.size();
    return 0;
}