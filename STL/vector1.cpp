#include <bits/stdc++.h>
using namespace std;
void inputvector(vector<int> &v1, int n)
{
    cout << "Enter the values in vector";
    int x;

    // for (auto i = v1.begin(); i < v1.end(); i++)
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v1.push_back(x);
    }
}
void outputvector(vector<int> &v1, int n)
{
    cout << "Values in vector are " << endl;
    //  for (auto i = v1.begin(); i < v1.end(); i++)
    for (int i = 0; i < n; i++)

    {
        cout << v1[i] << " ";
    }
}
int main()
{
    int n;
    vector<int> v1;
    cout << "Enter the size of vector";
    cin >> n;
    inputvector(v1, n);
    outputvector(v1, n);
    // cout << v1.at(2);

    return 0;
}
