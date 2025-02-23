// charcters in string with their frequency
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the String : ";
    cin >> s;
    map<char, int> m;
    for (auto ch : s)
    {
        m[ch]++;
    }

    for (auto &pair : m)
    {
        cout << "Character 1 : " << pair.first << " "
             << "frequency :" << pair.second << endl;
    }

    return 0;
}