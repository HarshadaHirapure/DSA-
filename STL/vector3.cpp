// rotate array
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &v, int n, int k)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (i >= (n - k))
        {
            temp.push_back(v[i]);
        }
    }
    for (int i = 0; i < (n - k); i++)
    {
        temp.push_back(v[i]);
    }
    v.clear();
    v = temp;
    for (auto value : v)
    {
        cout << value << endl;
    }
}
main()
{
    int n, x, k;
    cout << "Enter the lenghth of vector of pairs : ";
    cin >> n;
    vector<int> v;
    cout << "Enter the values : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Value for   " << i << endl;
        cin >> x;
        v.push_back(x);
    }
    cout << "Enter the k value : ";
    cin >> k;
    cout << "vector before rotation " << endl;

    for (auto value : v)
    {
        cout << value << endl;
    }

    cout << " vector after roation " << endl;
    rotate(v, n, k);
    return 0;
}