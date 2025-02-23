#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, ld, revnum = 0;
    cout << "eneter number : ";
    cin >> num;
    while (num > 0)
    {
        ld = num % 10;
        revnum = (revnum * 10) + ld;
        num = num / 10;
    }
    cout << revnum;

    return 0;
}