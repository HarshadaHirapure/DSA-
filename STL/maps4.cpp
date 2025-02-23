// first unique charachter
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, result;
    char cha;
    cout << "Enter String : ";
    cin >> s;
    int flag = 0;
    map<char, int> m;
    for (auto ch : s)
    {
        m[ch]++;
    }

    for (auto ch : s)
    {
        if (m[ch] == 1)
        {
            cout << ch;
            break;
        }
    }

    return 0;
}