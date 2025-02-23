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
void sort(pair<int, int> p1[], int n)
{
    int j;
    pair<int, int> temp;
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        temp = make_pair(p1[i].first, p1[i].second);
        while (j >= 0 && temp.second < p1[j].second)
        {

            p1[j + 1] = make_pair(p1[j].first, p1[j].second);
            j--;
        }
        p1[j + 1] = make_pair(temp.first, temp.second);
    }
}
int main()
{
    int n;
    cout << "Enter the  size of n ";
    cin >> n;
    pair<int, int> p1[n];
    inputpair(p1, n);
    outputpair(p1, n);
    sort(p1, n);
    outputpair(p1, n);
    return 0;
}