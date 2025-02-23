#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int count = 0;
    cout << "eneter number ";
    cin >> num;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    cout << count;

    return 0;
}