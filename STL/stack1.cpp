// balanced paranthesis
#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> symbols = {{'[', -1},
                                    {'(', -2},
                                    {'[', -3},
                                    {']', 1},
                                    {')', 2},
                                    {'}', 3}};
string isbalanecd(string s)
{
    stack<char> st;
    for (char bracket : s)
    {
        if (symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if (st.empty())
                return "NO";
            char top = st.top();
            st.pop();
            if (symbols[top] + symbols[bracket] != 0)
            {
                return "no";
            }
        }
    }
    if (st.empty())
        return " yes";
    else
    {
        return "no";
    }
}
int main()
{
    string s;
    cout << "Enter the string of ( paranthesis ";
    cin >> s;
    cout << isbalanecd(s);

    return 0;
}