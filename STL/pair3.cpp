#include <bits/stdc++.h>
using namespace std;
void inputpair(pair<int, int> p1[], int n)
{
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the values for pair " << i << " ";
        cin >> x >> y;
        p1[i] = make_pair(x, y);
    }
}
void outputpair(pair<int, int> p1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "values in pair " << i << " are " << p1[i].first << " " << p1[i].second << endl;
        ;
    }
}
void unique(pair<int, int> p1[], int n)
{
    int count = 1;
    int u = p1[0].first;
    for (int i = 0; i < n; i++)
    {
        if (u != p1[i].first)
        {
            count++;
        }
    }
    cout << "Number of Unique element are  " << count;
}
int main()
{
    int n;
    cout << " enter the size of n ";
    cin >> n;
    pair<int, int> p1[n];
    inputpair(p1, n);
    outputpair(p1, n);
    unique(p1, n);

    return 0;
}