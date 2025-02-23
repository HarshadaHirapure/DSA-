#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, ld, revnum = 0;
    cout << "eneter number : ";
    cin >> num;
    int dup = num;
    while (num > 0)
    {

        ld = num % 10;
        revnum = (revnum * 10) + ld;
        num = num / 10;
    }
    if (revnum == dup)
    {
        cout << "palindrome ";
    }
    else
    {
        cout << "its not palindrome";
    }

    return 0;
}