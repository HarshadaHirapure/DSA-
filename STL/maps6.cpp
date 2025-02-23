// find missing element
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    map<int, int> m;
    int n, value;
    int count = 0;
    cout << "Enter how many elements you want to insert : ";
    cin >> n;
    cout << "Enter n - 1 elements ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> value;
        v.push_back(value);
    }
    for (auto i : v)
    {
        m[i]++;
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        count++;
        if (count >= n + 1)
        {
            break;
        }
        else
        {
            if (count == it->first)
            {

                continue;
            }
            else
            {
                cout << count << " is not present ";
                break;
            }
        }
    }
    return 0;
}