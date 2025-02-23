// intersection and union
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s1;
    unordered_set<int> s2;
    unordered_set<int> result;
    int n1, n2, n;
    vector<int> v1;
    vector<int> v2;
    // the size of vector 1 should be less than vector 2
    cout << "enter the size of first vector : ";
    cin >> n1;
    cout << "Enter the size of second vector : ";
    cin >> n2;
    for (int i = 0; i < n1; i++)
    {
        int value;
        cin >> value;
        v1.push_back(value);
    }
    for (int i = 0; i < n2; i++)
    {
        int value;
        cin >> value;
        v2.push_back(value);
    }
    for (auto i : v1)
    {
        s1.insert(i);
    }
    for (auto i : v2)
    {
        s2.insert(i);
    }
    if (s1.size() <= s2.size())
    {
        for (auto &i : s1)
        {
            for (auto it1 = s2.begin(); it1 != s2.end(); it1++)
            {
                if (i == *it1)
                {
                    cout << "Intersection : " << i << " ";
                    n++;
                    if (n == s1.size())
                    {
                        cout << " subst ";
                    }
                }
            }
        }
    }

    for (auto i : s1)
    {
        result.insert(i);
    }
    for (auto i : s2)
    {
        result.insert(i);
    }
    if (n == s1.size())
    {
        cout << " subst ";
    }
    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}