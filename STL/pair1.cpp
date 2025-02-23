#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair<int, int> p1 = {1, 2};
    // cout << p1.first;
    // cout << p1.second;
    // pair<int, pair<int, string>> p2 = {{1}, {2, "Harshu"}};
    // cout << p2.first << p2.second.first << p2.second.second;
    // cout << endl;
    // pair<int, string> p3[3] = {{1, "harhu"},
    //                            {2, "harhu"},
    //                            {3, "harhu"}};
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << p3[i].first << " " << p3[i].second;
    //     cout << endl;
    // }
    int n;
    cout << "size of pairs";
    cin >> n;
    pair<int, int> p1[n];
    int x, y;
    cout << "Enter elements";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter pair " << i;
        cout << endl;
        cin >> x >> y;
        p1[i] = make_pair(x, y);
    }
    for (int i = 0; i < n; i++)
    {
        cout << p1[i].first << " " << p1[i].second;
        cout << endl;
    }
    int sum;
    sum = p1[0].first + p1[0].second;
    for (int i = 0; i < n; i++)
    {
        if (p1[i].first + p1[i].second >= sum)
        {
            sum = p1[i].first + p1[i].second;
        }
    }
    cout << sum;

    return 0;
}