#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cout << "Enter the lenghth of vector of pairs : ";
    cin >> n;
    vector<pair<int, int>> v;
    cout << "Enter the values : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Value for pair " << i << endl;
        cin >> x >> y;
        v.push_back({x, y});
    }
    for (auto value : v)
    {
        cout << value.first << "," << value.second << endl;
    }
    return 0;
}