#include <bits/stdc++.h>
using namespace std;
void inputpair(pair<int, int> p1[], int n)
{
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the values in pair " << i;
        cin >> x >> y;
        p1[i] = make_pair(x, y);
    }
}

void outputpair(pair<int, int> p1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "The values in pair " << i << "are " << p1[i].first << " " << p1[i].second;
        cout << endl;
    }
}
void key_sum(pair<int, int> p1[], int n, int key)
{
    int i = 0;
    while (i < n)
    {
        if ((p1[i].first + p1[i].second) == key)
        {
            cout << p1[i].first << "," << p1[i].second << " ";
        }
        i++;
    }
}
int main()
{
    int n, key;
    cout << "Enter the size of n ";
    cin >> n;
    pair<int, int> p1[n];
    // pair<int, int> temp[n];
    inputpair(p1, n);
    cout << "Enter the key sum of pair ";
    cin >> key;
    outputpair(p1, n);
    key_sum(p1, n, key);
    return 0;
}
