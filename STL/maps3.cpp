// two sum problems
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> m;
    vector<int> v;
    int val, n, target;
    cout << "Enter the size of vector";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }
    int key = 0;
    for (auto &i : v)
    {
        m[key] = i;
        key++;
    }
    cout << "Enter the targate value : ";
    cin >> target;
    for (auto it1 = m.begin(); it1 != m.end(); it1++)
    {
        for (auto it2 = next(it1); it2 != m.end(); it2++)
        {
            if ((it1->second + it2->second) == target)
            {
                cout << it1->first << " and " << it2->first << endl;
            }
        }
    }

    return 0;
}

/*for (auto &pair : m)
    {
        cout << "element : " << pair.first << " "
             << "frequency :" << pair.second << endl;
    }
    */